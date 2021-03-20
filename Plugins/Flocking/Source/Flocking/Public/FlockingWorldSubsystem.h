// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Avoidable.h"
#include "FlockingWorldSubsystem.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAvoidablesDelegate);
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
//private:
//		static void ModifyAvoidablesArray();
	
};
