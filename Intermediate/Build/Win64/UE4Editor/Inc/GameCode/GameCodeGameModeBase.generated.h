// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMECODE_GameCodeGameModeBase_generated_h
#error "GameCodeGameModeBase.generated.h already included, missing '#pragma once' in GameCodeGameModeBase.h"
#endif
#define GAMECODE_GameCodeGameModeBase_generated_h

#define GameCode_Source_GameCode_GameCodeGameModeBase_h_15_SPARSE_DATA
#define GameCode_Source_GameCode_GameCodeGameModeBase_h_15_RPC_WRAPPERS
#define GameCode_Source_GameCode_GameCodeGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GameCode_Source_GameCode_GameCodeGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameCodeGameModeBase(); \
	friend struct Z_Construct_UClass_AGameCodeGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGameCodeGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCode"), NO_API) \
	DECLARE_SERIALIZER(AGameCodeGameModeBase)


#define GameCode_Source_GameCode_GameCodeGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameCodeGameModeBase(); \
	friend struct Z_Construct_UClass_AGameCodeGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGameCodeGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCode"), NO_API) \
	DECLARE_SERIALIZER(AGameCodeGameModeBase)


#define GameCode_Source_GameCode_GameCodeGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameCodeGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameCodeGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCodeGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCodeGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCodeGameModeBase(AGameCodeGameModeBase&&); \
	NO_API AGameCodeGameModeBase(const AGameCodeGameModeBase&); \
public:


#define GameCode_Source_GameCode_GameCodeGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameCodeGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCodeGameModeBase(AGameCodeGameModeBase&&); \
	NO_API AGameCodeGameModeBase(const AGameCodeGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCodeGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCodeGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameCodeGameModeBase)


#define GameCode_Source_GameCode_GameCodeGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define GameCode_Source_GameCode_GameCodeGameModeBase_h_12_PROLOG
#define GameCode_Source_GameCode_GameCodeGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameCode_Source_GameCode_GameCodeGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	GameCode_Source_GameCode_GameCodeGameModeBase_h_15_SPARSE_DATA \
	GameCode_Source_GameCode_GameCodeGameModeBase_h_15_RPC_WRAPPERS \
	GameCode_Source_GameCode_GameCodeGameModeBase_h_15_INCLASS \
	GameCode_Source_GameCode_GameCodeGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameCode_Source_GameCode_GameCodeGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameCode_Source_GameCode_GameCodeGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	GameCode_Source_GameCode_GameCodeGameModeBase_h_15_SPARSE_DATA \
	GameCode_Source_GameCode_GameCodeGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GameCode_Source_GameCode_GameCodeGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	GameCode_Source_GameCode_GameCodeGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMECODE_API UClass* StaticClass<class AGameCodeGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameCode_Source_GameCode_GameCodeGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
