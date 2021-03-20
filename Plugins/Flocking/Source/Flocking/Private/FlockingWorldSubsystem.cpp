// Fill out your copyright notice in the Description page of Project Settings.


#include "FlockingWorldSubsystem.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"


//void UFlockingWorldSubsystem::ModifyAvoidablesArray()
//{
//	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAvoidable::StaticClass(), Avoidables);
//}

void UFlockingWorldSubsystem::AddAvoidable(class AAvoidable* avoidable)
{
	Avoidables.Add(avoidable);
}

void UFlockingWorldSubsystem::RemoveAvoidable(class AAvoidable* avoidable)
{
	Avoidables.Remove(avoidable);
}