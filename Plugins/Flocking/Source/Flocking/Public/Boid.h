// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "AvoidablesManager.h"
#include "Boid.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate);

UCLASS(Blueprintable)
class ABoid : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABoid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Delegate called when time expires and next target in array is picked
	UPROPERTY(BlueprintAssignable, Category = "Test")
		FDelegate OnTargetTimeExpire;
	//Moving speed for the boid actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float Speed;
	//Max radius in which can be found others boids that might influence this one path
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float NeighboursRadius;
	//distance radius from other boids for separate influence
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float SeparationRadius;
	//Weight multiplied for the Separating direction from other boids in Separation Radius
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float SeparationWeight;
	//Weight multiplied for the average moving direction of other boids in the Neighbours radious
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float AlignementWeight;
	//Weight multiplied for the cohesion direction (direction towards the near boids to keep them togheter) towards boids in NeighboursRadius
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float CohesionWeight;
	//Steer speed towards near boids - Cohesion
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float SteerSpeed;
	//Target towards which the sward may move: if none is given the swarm will roam around.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		TArray<AActor*> Targets;
	//Amount of time the boid will roam around the target before picking the next one from the array
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float TargetTimeAround;
	//Weight multiplied for direction towards the target, if a target is given
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float TargetWeight;
	//Radius at wich the swarm will stop moving towards the target if target is given.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float TargetAvoidanceRadius;
	//Distance added to the avoidance radius that the boid has to cover befor moving back towards the target.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float AvoidanceDistanceFromTarget;
	//range distance from obstacles
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float DistanceToAvoidableObjects;
	//angle at which obstacles will be detected
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float AvoidAngle;
	//Importance to avoid obstacles
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float AvoidWeight;
	//Will be taken a random value between -MaxRandomicAngle and MaxRandomicAngle that will modify the target - boid direction that the boid will follow to move away from the target when TargetAvoidanceRadius is reached
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float MaxRandomicAngle;
	//When checked the sworm is grounded and now flying
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		bool IsGrounded;
	//If IsGrounded is checked provide a Z value for the swarm.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boid")
		float ZValue;
	//Subsystem keeping copunt of the spawned objects to avoid


	//functions

private:
	class UFlockingWorldSubsystem* FSub;
	bool bTiming = false;
	bool bIsStraying = false;
	bool bIsAvoiding;
	int32 TargetIndex = 0;
	float BackMul = 1;
	float CasulAngle = 0;
	float Time;
	float Lerping;
	float NormalLerp;
	float OldDistance = FLT_MAX;
	FVector Location;
	FVector Velocity;
	FVector Randomic = FVector::ZeroVector;
	FVector Forward = FVector::ZeroVector;
	FVector Right = FVector::ZeroVector;
	FVector Up = FVector::ZeroVector;
	TArray<AActor*> Boids;
	TArray<AActor*> Neighbours;


	void GetNeighbours();
	bool LeftTest(AActor* obstacle);
	bool UpTest(AActor* obstacle);
	FVector Flock(TArray<AActor*> neighbours_array, float deltaTime);
	FVector Separate(TArray<AActor*> neighbours_array);
	FVector Align(TArray<AActor*> neighbours_array);
	FVector Cohere(TArray<AActor*> neighbours_array);
	FVector SteerTo(FVector Target);
	FVector MoveToTarget(float deltaTime);
	FVector Avoid();
	bool IsObstacleStraying(AActor* obs, float old_distance);
};