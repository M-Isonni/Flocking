// Fill out your copyright notice in the Description page of Project Settings.


#include "Avoidable.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "FlockingWorldSubsystem.h"


// Sets default values
AAvoidable::AAvoidable()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAvoidable::BeginPlay()
{
	Super::BeginPlay();
	FSub = GetWorld()->GetSubsystem<UFlockingWorldSubsystem>();
	if (FSub)
	{
		FSub->AddAvoidable(this);
	}
}

// Called every frame
void AAvoidable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAvoidable::RemoveFromSubsystem()
{
	FSub->RemoveAvoidable(this);
}
