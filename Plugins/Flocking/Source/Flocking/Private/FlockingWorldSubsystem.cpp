// Fill out your copyright notice in the Description page of Project Settings.


#include "FlockingWorldSubsystem.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"



void UFlockingWorldSubsystem::AddAvoidable(AAvoidable* avoidable)
{
	Avoidables.Add(avoidable);
}

void UFlockingWorldSubsystem::RemoveAvoidable(AAvoidable* avoidable)
{
	Avoidables.Remove(avoidable);
}