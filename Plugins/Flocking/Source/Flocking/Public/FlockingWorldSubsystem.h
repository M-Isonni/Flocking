// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Avoidable.h"
#include "FlockingWorldSubsystem.generated.h"


/**
 * 
 */
UCLASS()
class UFlockingWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:	
		TArray<AActor*> Avoidables;
		void AddAvoidable(AAvoidable*);
		void RemoveAvoidable(AAvoidable*);
	
};
