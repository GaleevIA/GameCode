// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMECODE_BasePlatform_generated_h
#error "BasePlatform.generated.h already included, missing '#pragma once' in BasePlatform.h"
#endif
#define GAMECODE_BasePlatform_generated_h

#define GameCode_Source_GameCode_BasePlatform_h_20_SPARSE_DATA
#define GameCode_Source_GameCode_BasePlatform_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlatformTimelineTiltEnd); \
	DECLARE_FUNCTION(execPlatformTimelineTiltBegin); \
	DECLARE_FUNCTION(execPlatformInvokatorOnInvoked);


#define GameCode_Source_GameCode_BasePlatform_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlatformTimelineTiltEnd); \
	DECLARE_FUNCTION(execPlatformTimelineTiltBegin); \
	DECLARE_FUNCTION(execPlatformInvokatorOnInvoked);


#define GameCode_Source_GameCode_BasePlatform_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlatform(); \
	friend struct Z_Construct_UClass_ABasePlatform_Statics; \
public: \
	DECLARE_CLASS(ABasePlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCode"), NO_API) \
	DECLARE_SERIALIZER(ABasePlatform)


#define GameCode_Source_GameCode_BasePlatform_h_20_INCLASS \
private: \
	static void StaticRegisterNativesABasePlatform(); \
	friend struct Z_Construct_UClass_ABasePlatform_Statics; \
public: \
	DECLARE_CLASS(ABasePlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCode"), NO_API) \
	DECLARE_SERIALIZER(ABasePlatform)


#define GameCode_Source_GameCode_BasePlatform_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlatform(ABasePlatform&&); \
	NO_API ABasePlatform(const ABasePlatform&); \
public:


#define GameCode_Source_GameCode_BasePlatform_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlatform(ABasePlatform&&); \
	NO_API ABasePlatform(const ABasePlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlatform)


#define GameCode_Source_GameCode_BasePlatform_h_20_PRIVATE_PROPERTY_OFFSET
#define GameCode_Source_GameCode_BasePlatform_h_17_PROLOG
#define GameCode_Source_GameCode_BasePlatform_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameCode_Source_GameCode_BasePlatform_h_20_PRIVATE_PROPERTY_OFFSET \
	GameCode_Source_GameCode_BasePlatform_h_20_SPARSE_DATA \
	GameCode_Source_GameCode_BasePlatform_h_20_RPC_WRAPPERS \
	GameCode_Source_GameCode_BasePlatform_h_20_INCLASS \
	GameCode_Source_GameCode_BasePlatform_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameCode_Source_GameCode_BasePlatform_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameCode_Source_GameCode_BasePlatform_h_20_PRIVATE_PROPERTY_OFFSET \
	GameCode_Source_GameCode_BasePlatform_h_20_SPARSE_DATA \
	GameCode_Source_GameCode_BasePlatform_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	GameCode_Source_GameCode_BasePlatform_h_20_INCLASS_NO_PURE_DECLS \
	GameCode_Source_GameCode_BasePlatform_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMECODE_API UClass* StaticClass<class ABasePlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameCode_Source_GameCode_BasePlatform_h


#define FOREACH_ENUM_EPLATFORMBEHAVIOR(op) \
	op(EPlatformBehavior::OnDemand) \
	op(EPlatformBehavior::Loop) 

enum class EPlatformBehavior : uint8;
template<> GAMECODE_API UEnum* StaticEnum<EPlatformBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
