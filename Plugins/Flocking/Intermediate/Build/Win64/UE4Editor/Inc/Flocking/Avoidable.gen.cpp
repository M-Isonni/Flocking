// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flocking/Public/Avoidable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvoidable() {}
// Cross Module References
	FLOCKING_API UClass* Z_Construct_UClass_AAvoidable_NoRegister();
	FLOCKING_API UClass* Z_Construct_UClass_AAvoidable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Flocking();
// End Cross Module References
	DEFINE_FUNCTION(AAvoidable::execRemoveFromSubsystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromSubsystem();
		P_NATIVE_END;
	}
	void AAvoidable::StaticRegisterNativesAAvoidable()
	{
		UClass* Class = AAvoidable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveFromSubsystem", &AAvoidable::execRemoveFromSubsystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAvoidable_RemoveFromSubsystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvoidable_RemoveFromSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Flock" },
		{ "ModuleRelativePath", "Public/Avoidable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvoidable_RemoveFromSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvoidable, nullptr, "RemoveFromSubsystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvoidable_RemoveFromSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAvoidable_RemoveFromSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvoidable_RemoveFromSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvoidable_RemoveFromSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAvoidable_NoRegister()
	{
		return AAvoidable::StaticClass();
	}
	struct Z_Construct_UClass_AAvoidable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAvoidable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Flocking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAvoidable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAvoidable_RemoveFromSubsystem, "RemoveFromSubsystem" }, // 3318155430
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvoidable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Avoidable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Avoidable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAvoidable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAvoidable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAvoidable_Statics::ClassParams = {
		&AAvoidable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAvoidable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAvoidable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAvoidable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAvoidable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAvoidable, 4071659023);
	template<> FLOCKING_API UClass* StaticClass<AAvoidable>()
	{
		return AAvoidable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAvoidable(Z_Construct_UClass_AAvoidable, &AAvoidable::StaticClass, TEXT("/Script/Flocking"), TEXT("AAvoidable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAvoidable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
