// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flocking/Public/FlockingWorldSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockingWorldSubsystem() {}
// Cross Module References
	FLOCKING_API UFunction* Z_Construct_UDelegateFunction_Flocking_AvoidablesDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Flocking();
	FLOCKING_API UClass* Z_Construct_UClass_UFlockingWorldSubsystem_NoRegister();
	FLOCKING_API UClass* Z_Construct_UClass_UFlockingWorldSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Flocking_AvoidablesDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Flocking_AvoidablesDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlockingWorldSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Flocking_AvoidablesDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Flocking, nullptr, "AvoidablesDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Flocking_AvoidablesDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Flocking_AvoidablesDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Flocking_AvoidablesDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Flocking_AvoidablesDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFlockingWorldSubsystem::StaticRegisterNativesUFlockingWorldSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UFlockingWorldSubsystem_NoRegister()
	{
		return UFlockingWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UFlockingWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlockingWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Flocking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockingWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FlockingWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/FlockingWorldSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlockingWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlockingWorldSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlockingWorldSubsystem_Statics::ClassParams = {
		&UFlockingWorldSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlockingWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockingWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlockingWorldSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlockingWorldSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlockingWorldSubsystem, 3689175294);
	template<> FLOCKING_API UClass* StaticClass<UFlockingWorldSubsystem>()
	{
		return UFlockingWorldSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlockingWorldSubsystem(Z_Construct_UClass_UFlockingWorldSubsystem, &UFlockingWorldSubsystem::StaticClass, TEXT("/Script/Flocking"), TEXT("UFlockingWorldSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlockingWorldSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
