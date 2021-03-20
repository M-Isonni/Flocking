// Fill out your copyright notice in the Description page of Project Settings.


#include "Boid.h"
#include "Avoidable.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "FlockingWorldSubsystem.h"

// Sets default values
ABoid::ABoid()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABoid::BeginPlay()
{
	Super::BeginPlay();
	//GM = (AFPS_GameMode*)GetWorld()->GetAuthGameMode();
	Velocity = FVector(FMath::FRandRange(0.0f, 1.0f) * 2 - 1, FMath::FRandRange(0.0f, 1.0f) * 2 - 1, FMath::FRandRange(0.0f, 1.0f) * 2 - 1);
	UGameplayStatics::GetAllActorsOfClass((UObject*)GetWorld(), ABoid::StaticClass(), Boids);
	if (IsGrounded)
	{
		FVector grounded_loc(GetActorLocation().X, GetActorLocation().Y, ZValue);
		SetActorLocation(grounded_loc);
	}
	Time = TargetTimeAround;

	FSub = GetWorld()->GetSubsystem<UFlockingWorldSubsystem>();
}

// Called every frame
void ABoid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Location = GetActorLocation();
	GetNeighbours();
	FVector acc = Flock(Neighbours, DeltaTime);
	FRotator dir = acc.ToOrientationRotator();
	FVector new_loc = Location + acc * Speed * DeltaTime;
	if (IsGrounded)
	{
		new_loc = FVector(new_loc.X, new_loc.Y, ZValue);
	}
	SetActorLocation(new_loc);
	SetActorRotation(dir);
}

void ABoid::GetNeighbours()
{
	Neighbours.Empty();

	//Can also change it to MultiTraceByObject Sphere in order to detect all neighbours without using Boids array
	for (AActor* a : Boids)
	{
		if (a != this)
		{
			float distance = (a->GetActorLocation() - Location).Size();
			if (distance <= NeighboursRadius && distance > 0.0f)
			{
				Neighbours.Add(a);
			}
		}
	}
}

FVector ABoid::Flock(TArray<AActor*> neighbours_array, float deltaTime)
{

	FVector separation = Separate(neighbours_array) * SeparationWeight;
	FVector alignement = Align(neighbours_array) * AlignementWeight;
	FVector cohesion = Cohere(neighbours_array) * CohesionWeight;
	FVector avoid = Avoid() * AvoidWeight;
	FVector target_dir = MoveToTarget(deltaTime);

	/*float delta_mul = GetDistanceMultiplier()*/;

	float mul = 1;
	if (bIsStraying)
	{
		mul = -1;
	}
	if (!bIsAvoiding)
	{
		Lerping = 0.0f;
	}
	else
	{
		Lerping += deltaTime * mul;
	}
	if (Lerping >= 1)
	{
		Lerping = 1;
	}
	if (Lerping <= 0)
	{
		Lerping = 0;
	}

	FVector moving_dir = separation + alignement + cohesion + target_dir;
	FVector avoiding_dir = avoid;
	FVector lerp_vector = FMath::Lerp(moving_dir, avoiding_dir, Lerping);
	return lerp_vector;
}

FVector ABoid::Separate(TArray<AActor*> neighbours_array)
{
	FVector sum = FVector::ZeroVector;
	int32 count = 0;
	float distance = 0;
	FVector boid_location;
	for (AActor* boid : neighbours_array)
	{
		boid_location = boid->GetActorLocation();
		distance = (boid_location - Location).Size();
		if (distance < SeparationRadius)
		{
			FVector loc_to_boid = Location - boid_location;
			loc_to_boid.Normalize();
			sum += loc_to_boid / distance;
			count++;
		}
	}
	if (count > 0)
	{
		return sum / count;
	}
	return sum;
}

FVector ABoid::Align(TArray<AActor*> neighbours_array)
{
	FVector sum = FVector::ZeroVector;
	int32 count = 0;
	for (AActor* boid : neighbours_array)
	{
		sum += boid->GetVelocity();
		count++;
	}
	if (count > 0)
	{
		return sum / count;
	}
	return sum;
}

FVector ABoid::Cohere(TArray<AActor*> neighbours_array)
{
	FVector sum = FVector::ZeroVector;
	int32 count = 0;
	for (AActor* boid : neighbours_array)
	{
		sum += boid->GetActorLocation();
		count++;
	}
	if (count > 0)
	{
		return SteerTo(sum / count);
	}
	else return sum;
}

FVector ABoid::SteerTo(FVector Target)
{
	FVector desired = Target - Location;
	float distance = desired.Size();
	FVector steer = FVector::ZeroVector;
	if (distance > 0)
	{
		desired.Normalize();
		if (distance < 100)
		{
			desired = desired * SteerSpeed * (distance / 100.0f);
		}
		else
		{
			desired = desired * SteerSpeed;
		}
		steer = desired - Velocity;

	}
	return steer;
}

FVector ABoid::Avoid()
{
	FVector new_dir = FVector::ZeroVector;
	if (!FSub)
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Subsystem not found!"));
		return new_dir;
	}
	if (!bIsAvoiding)
	{		
		Forward = GetActorForwardVector();
		Right = GetActorRightVector();
		Up = GetActorUpVector();
	}
	if (FSub->Avoidables.Num() > 0)
	{
		float mul = 1;
		bIsAvoiding = false;
		int32 count = 0;
		for (AActor* a : FSub->Avoidables)
		{
			Right = a->GetActorRightVector();
			FVector a_dir = a->GetActorLocation() - Location;
			float distance = a_dir.Size();
			a_dir.Normalize();
			float a_angle = acos(FVector::DotProduct(a_dir, GetActorForwardVector()));
			FVector n_dir;
			if (distance > DistanceToAvoidableObjects)
			{
				FVector dir = Location - a->GetActorLocation();
				n_dir = FVector(a->GetActorLocation().X, dir.Y, dir.Z);
				n_dir.Normalize();
				OldDistance = FLT_MAX;
				bIsStraying = false;
				/*CasulAngle = FMath::FRandRange(0, 90);
				Randomic = FVector::ZeroVector;*/
			}

			if (distance < DistanceToAvoidableObjects && a_angle < AvoidAngle)
			{
				//Randomic = FVector::CrossProduct(a_dir, Up) * sin(CasulAngle);
				mul = 1 - distance / DistanceToAvoidableObjects;
				if (LeftTest(a))
				{

					new_dir -= Right;
					count++;
				}
				else
				{
					new_dir += Right;
					count++;
				}
				if (UpTest(a))
				{
					new_dir += a->GetActorUpVector();
				}
				else
				{
					new_dir -= a->GetActorUpVector();
				}
				//new_dir += Randomic;
				//new_dir.Normalize();
				bIsStraying = IsObstacleStraying(a, OldDistance);
				OldDistance = (a->GetActorLocation() - Location).Size();
				bIsAvoiding = true;
			}
		}
		if (count > 0)
		{
			return (new_dir / count) * mul;
		}
		else return new_dir;
	}
	return new_dir;
}

bool ABoid::LeftTest(AActor* obstacle)
{
	FVector dir = Location - obstacle->GetActorLocation();
	FVector perp = FVector::CrossProduct(obstacle->GetActorForwardVector(), dir);
	float dot = FVector::DotProduct(perp, obstacle->GetActorUpVector());
	if (dot > 0.0f)
	{
		return false;
	}
	else if (dot <= 0.0f)
	{
		return true;
	}
	return false;
}

bool ABoid::UpTest(AActor* obstacle)
{
	FVector dir = Location - obstacle->GetActorLocation();
	dir.Normalize();
	FVector forward = obstacle->GetActorForwardVector();
	if (dir.Z > forward.Z)
	{
		return true;
	}
	return false;
}

bool ABoid::IsObstacleStraying(AActor* obs, float old_distance)
{
	float distance = (obs->GetActorLocation() - Location).Size();
	if (distance < old_distance)
	{
		return false;
	}
	return true;
}
FVector ABoid::MoveToTarget(float deltaTime)
{
	if (Targets.Num() > 0)
	{
		if (bTiming)
		{
			Time -= deltaTime;
		}
		FVector target_dir = Targets[TargetIndex]->GetActorLocation() - Location;
		float distance = target_dir.Size();
		target_dir.Normalize();
		if (distance <= TargetAvoidanceRadius && BackMul == 1)
		{
			bTiming = true;
			BackMul = -1;
			CasulAngle = FMath::FRandRange(-MaxRandomicAngle, MaxRandomicAngle);
			Randomic = FVector::CrossProduct(target_dir, GetActorUpVector()) * sin(CasulAngle);
		}
		if (distance >= TargetAvoidanceRadius + AvoidanceDistanceFromTarget)
		{
			BackMul = 1;
			Randomic = FVector::ZeroVector;
		}
		if (Time <= 0)
		{
			BackMul = 1;
			TargetIndex++;
			if (TargetIndex >= Targets.Num())
			{
				TargetIndex = 0;
			}
			bTiming = false;
			Time = TargetTimeAround;
			OnTargetTimeExpire.Broadcast();
		}
		target_dir += Randomic;
		target_dir *= BackMul;
		target_dir.Normalize();
		target_dir *= TargetWeight;
		return target_dir;
	}
	return FVector::ZeroVector;
}