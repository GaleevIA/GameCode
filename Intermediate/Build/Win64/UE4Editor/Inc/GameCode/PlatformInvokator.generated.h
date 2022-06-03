// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMECODE_PlatformInvokator_generated_h
#error "PlatformInvokator.generated.h already included, missing '#pragma once' in PlatformInvokator.h"
#endif
#define GAMECODE_PlatformInvokator_generated_h

#define GameCode_Source_GameCode_PlatformInvokator_h_8_DELEGATE \
static inline void FOnInvocatorActivated_DelegateWrapper(const FMulticastScriptDelegate& OnInvocatorActivated) \
{ \
	OnInvocatorActivated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GameCode_Source_GameCode_PlatformInvokator_h_13_SPARSE_DATA
#define GameCode_Source_GameCode_PlatformInvokator_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInvoke);


#define GameCode_Source_GameCode_PlatformInvokator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInvoke);


#define GameCode_Source_GameCode_PlatformInvokator_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformInvokator(); \
	friend struct Z_Construct_UClass_APlatformInvokator_Statics; \
public: \
	DECLARE_CLASS(APlatformInvokator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCode"), NO_API) \
	DECLARE_SERIALIZER(APlatformInvokator)


#define GameCode_Source_GameCode_PlatformInvokator_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPlatformInvokator(); \
	friend struct Z_Construct_UClass_APlatformInvokator_Statics; \
public: \
	DECLARE_CLASS(APlatformInvokator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCode"), NO_API) \
	DECLARE_SERIALIZER(APlatformInvokator)


#define GameCode_Source_GameCode_PlatformInvokator_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformInvokator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformInvokator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformInvokator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformInvokator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformInvokator(APlatformInvokator&&); \
	NO_API APlatformInvokator(const APlatformInvokator&); \
public:


#define GameCode_Source_GameCode_PlatformInvokator_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformInvokator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformInvokator(APlatformInvokator&&); \
	NO_API APlatformInvokator(const APlatformInvokator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformInvokator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformInvokator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformInvokator)


#define GameCode_Source_GameCode_PlatformInvokator_h_13_PRIVATE_PROPERTY_OFFSET
#define GameCode_Source_GameCode_PlatformInvokator_h_10_PROLOG
#define GameCode_Source_GameCode_PlatformInvokator_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameCode_Source_GameCode_PlatformInvokator_h_13_PRIVATE_PROPERTY_OFFSET \
	GameCode_Source_GameCode_PlatformInvokator_h_13_SPARSE_DATA \
	GameCode_Source_GameCode_PlatformInvokator_h_13_RPC_WRAPPERS \
	GameCode_Source_GameCode_PlatformInvokator_h_13_INCLASS \
	GameCode_Source_GameCode_PlatformInvokator_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameCode_Source_GameCode_PlatformInvokator_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameCode_Source_GameCode_PlatformInvokator_h_13_PRIVATE_PROPERTY_OFFSET \
	GameCode_Source_GameCode_PlatformInvokator_h_13_SPARSE_DATA \
	GameCode_Source_GameCode_PlatformInvokator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GameCode_Source_GameCode_PlatformInvokator_h_13_INCLASS_NO_PURE_DECLS \
	GameCode_Source_GameCode_PlatformInvokator_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMECODE_API UClass* StaticClass<class APlatformInvokator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameCode_Source_GameCode_PlatformInvokator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
