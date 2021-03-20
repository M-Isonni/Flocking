// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOCKING_Boid_generated_h
#error "Boid.generated.h already included, missing '#pragma once' in Boid.h"
#endif
#define FLOCKING_Boid_generated_h

#define HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_10_DELEGATE \
static inline void FDelegate_DelegateWrapper(const FMulticastScriptDelegate& Delegate) \
{ \
	Delegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_SPARSE_DATA
#define HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_RPC_WRAPPERS
#define HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoid(); \
	friend struct Z_Construct_UClass_ABoid_Statics; \
public: \
	DECLARE_CLASS(ABoid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(ABoid)


#define HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABoid(); \
	friend struct Z_Construct_UClass_ABoid_Statics; \
public: \
	DECLARE_CLASS(ABoid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocking"), NO_API) \
	DECLARE_SERIALIZER(ABoid)


#define HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoid(ABoid&&); \
	NO_API ABoid(const ABoid&); \
public:


#define HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoid(ABoid&&); \
	NO_API ABoid(const ABoid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoid)


#define HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_12_PROLOG
#define HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_SPARSE_DATA \
	HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_RPC_WRAPPERS \
	HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_INCLASS \
	HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_SPARSE_DATA \
	HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOCKING_API UClass* StaticClass<class ABoid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_Flocking_Source_Flocking_Public_Boid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
