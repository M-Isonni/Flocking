// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flocking/Public/Boid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoid() {}
// Cross Module References
	FLOCKING_API UFunction* Z_Construct_UDelegateFunction_Flocking_Delegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Flocking();
	FLOCKING_API UClass* Z_Construct_UClass_ABoid_NoRegister();
	FLOCKING_API UClass* Z_Construct_UClass_ABoid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Flocking_Delegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Flocking_Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Flocking_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Flocking, nullptr, "Delegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Flocking_Delegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Flocking_Delegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Flocking_Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Flocking_Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ABoid::StaticRegisterNativesABoid()
	{
	}
	UClass* Z_Construct_UClass_ABoid_NoRegister()
	{
		return ABoid::StaticClass();
	}
	struct Z_Construct_UClass_ABoid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGrounded_MetaData[];
#endif
		static void NewProp_IsGrounded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGrounded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRandomicAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRandomicAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToAvoidableObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToAvoidableObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceDistanceFromTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceDistanceFromTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAvoidanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetAvoidanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTimeAround_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetTimeAround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteerSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteerSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CohesionWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CohesionWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignementWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlignementWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparationWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighboursRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighboursRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetTimeExpire_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetTimeExpire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Flocking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Boid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Boid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_ZValue_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//If IsGrounded is checked provide a Z value for the swarm.\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "If IsGrounded is checked provide a Z value for the swarm." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_ZValue = { "ZValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, ZValue), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_ZValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_ZValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_IsGrounded_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//When checked the sworm is grounded and now flying\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "When checked the sworm is grounded and now flying" },
	};
#endif
	void Z_Construct_UClass_ABoid_Statics::NewProp_IsGrounded_SetBit(void* Obj)
	{
		((ABoid*)Obj)->IsGrounded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_IsGrounded = { "IsGrounded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABoid), &Z_Construct_UClass_ABoid_Statics::NewProp_IsGrounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_IsGrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_IsGrounded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_MaxRandomicAngle_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Will be taken a random value between -MaxRandomicAngle and MaxRandomicAngle that will modify the target - boid direction that the boid will follow to move away from the target when TargetAvoidanceRadius is reached\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Will be taken a random value between -MaxRandomicAngle and MaxRandomicAngle that will modify the target - boid direction that the boid will follow to move away from the target when TargetAvoidanceRadius is reached" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_MaxRandomicAngle = { "MaxRandomicAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, MaxRandomicAngle), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_MaxRandomicAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_MaxRandomicAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_AvoidWeight_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Importance to avoid obstacles\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Importance to avoid obstacles" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_AvoidWeight = { "AvoidWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, AvoidWeight), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_AvoidWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_AvoidWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_AvoidAngle_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//angle at which obstacles will be detected\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "angle at which obstacles will be detected" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_AvoidAngle = { "AvoidAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, AvoidAngle), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_AvoidAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_AvoidAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_DistanceToAvoidableObjects_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//range distance from obstacles\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "range distance from obstacles" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_DistanceToAvoidableObjects = { "DistanceToAvoidableObjects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, DistanceToAvoidableObjects), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_DistanceToAvoidableObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_DistanceToAvoidableObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_AvoidanceDistanceFromTarget_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Distance added to the avoidance radius that the boid has to cover befor moving back towards the target.\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Distance added to the avoidance radius that the boid has to cover befor moving back towards the target." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_AvoidanceDistanceFromTarget = { "AvoidanceDistanceFromTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, AvoidanceDistanceFromTarget), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_AvoidanceDistanceFromTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_AvoidanceDistanceFromTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_TargetAvoidanceRadius_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Radius at wich the swarm will stop moving towards the target if target is given.\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Radius at wich the swarm will stop moving towards the target if target is given." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_TargetAvoidanceRadius = { "TargetAvoidanceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, TargetAvoidanceRadius), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_TargetAvoidanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_TargetAvoidanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_TargetWeight_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Weight multiplied for direction towards the target, if a target is given\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Weight multiplied for direction towards the target, if a target is given" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_TargetWeight = { "TargetWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, TargetWeight), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_TargetWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_TargetWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_TargetTimeAround_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Amount of time the boid will roam around the target before picking the next one from the array\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Amount of time the boid will roam around the target before picking the next one from the array" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_TargetTimeAround = { "TargetTimeAround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, TargetTimeAround), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_TargetTimeAround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_TargetTimeAround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Target towards which the sward may move: if none is given the swarm will roam around.\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Target towards which the sward may move: if none is given the swarm will roam around." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_Targets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_SteerSpeed_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Steer speed towards near boids - Cohesion\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Steer speed towards near boids - Cohesion" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_SteerSpeed = { "SteerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, SteerSpeed), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_SteerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_SteerSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_CohesionWeight_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Weight multiplied for the cohesion direction (direction towards the near boids to keep them togheter) towards boids in NeighboursRadius\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Weight multiplied for the cohesion direction (direction towards the near boids to keep them togheter) towards boids in NeighboursRadius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_CohesionWeight = { "CohesionWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, CohesionWeight), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_CohesionWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_CohesionWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_AlignementWeight_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Weight multiplied for the average moving direction of other boids in the Neighbours radious\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Weight multiplied for the average moving direction of other boids in the Neighbours radious" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_AlignementWeight = { "AlignementWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, AlignementWeight), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_AlignementWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_AlignementWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_SeparationWeight_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Weight multiplied for the Separating direction from other boids in Separation Radius\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Weight multiplied for the Separating direction from other boids in Separation Radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_SeparationWeight = { "SeparationWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, SeparationWeight), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_SeparationWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_SeparationWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_SeparationRadius_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//distance radius from other boids for separate influence\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "distance radius from other boids for separate influence" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_SeparationRadius = { "SeparationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, SeparationRadius), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_SeparationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_SeparationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_NeighboursRadius_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Max radius in which can be found others boids that might influence this one path\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Max radius in which can be found others boids that might influence this one path" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_NeighboursRadius = { "NeighboursRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, NeighboursRadius), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_NeighboursRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_NeighboursRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Boid" },
		{ "Comment", "//Moving speed for the boid actor\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Moving speed for the boid actor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, Speed), METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoid_Statics::NewProp_OnTargetTimeExpire_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "//Delegate called when time expires and next target in array is picked\n" },
		{ "ModuleRelativePath", "Public/Boid.h" },
		{ "ToolTip", "Delegate called when time expires and next target in array is picked" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABoid_Statics::NewProp_OnTargetTimeExpire = { "OnTargetTimeExpire", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoid, OnTargetTimeExpire), Z_Construct_UDelegateFunction_Flocking_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::NewProp_OnTargetTimeExpire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::NewProp_OnTargetTimeExpire_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_ZValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_IsGrounded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_MaxRandomicAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_AvoidWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_AvoidAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_DistanceToAvoidableObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_AvoidanceDistanceFromTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_TargetAvoidanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_TargetWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_TargetTimeAround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_Targets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_Targets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_SteerSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_CohesionWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_AlignementWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_SeparationWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_SeparationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_NeighboursRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoid_Statics::NewProp_OnTargetTimeExpire,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoid_Statics::ClassParams = {
		&ABoid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoid, 2575946101);
	template<> FLOCKING_API UClass* StaticClass<ABoid>()
	{
		return ABoid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoid(Z_Construct_UClass_ABoid, &ABoid::StaticClass, TEXT("/Script/Flocking"), TEXT("ABoid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
