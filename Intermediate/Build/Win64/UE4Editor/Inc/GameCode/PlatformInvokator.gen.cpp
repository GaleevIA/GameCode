// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameCode/PlatformInvokator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformInvokator() {}
// Cross Module References
	GAMECODE_API UFunction* Z_Construct_UDelegateFunction_GameCode_OnInvocatorActivated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameCode();
	GAMECODE_API UClass* Z_Construct_UClass_APlatformInvokator_NoRegister();
	GAMECODE_API UClass* Z_Construct_UClass_APlatformInvokator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameCode_OnInvocatorActivated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameCode_OnInvocatorActivated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlatformInvokator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameCode_OnInvocatorActivated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameCode, nullptr, "OnInvocatorActivated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameCode_OnInvocatorActivated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameCode_OnInvocatorActivated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameCode_OnInvocatorActivated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameCode_OnInvocatorActivated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(APlatformInvokator::execInvoke)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Invoke();
		P_NATIVE_END;
	}
	void APlatformInvokator::StaticRegisterNativesAPlatformInvokator()
	{
		UClass* Class = APlatformInvokator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Invoke", &APlatformInvokator::execInvoke },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlatformInvokator_Invoke_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformInvokator_Invoke_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlatformInvokator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformInvokator_Invoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformInvokator, nullptr, "Invoke", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlatformInvokator_Invoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformInvokator_Invoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlatformInvokator_Invoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlatformInvokator_Invoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlatformInvokator_NoRegister()
	{
		return APlatformInvokator::StaticClass();
	}
	struct Z_Construct_UClass_APlatformInvokator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInvocatorActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInvocatorActivated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformInvokator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameCode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlatformInvokator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlatformInvokator_Invoke, "Invoke" }, // 3899112033
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformInvokator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformInvokator.h" },
		{ "ModuleRelativePath", "PlatformInvokator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformInvokator_Statics::NewProp_OnInvocatorActivated_MetaData[] = {
		{ "ModuleRelativePath", "PlatformInvokator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlatformInvokator_Statics::NewProp_OnInvocatorActivated = { "OnInvocatorActivated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformInvokator, OnInvocatorActivated), Z_Construct_UDelegateFunction_GameCode_OnInvocatorActivated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APlatformInvokator_Statics::NewProp_OnInvocatorActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformInvokator_Statics::NewProp_OnInvocatorActivated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformInvokator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformInvokator_Statics::NewProp_OnInvocatorActivated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformInvokator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformInvokator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformInvokator_Statics::ClassParams = {
		&APlatformInvokator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlatformInvokator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformInvokator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlatformInvokator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformInvokator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformInvokator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformInvokator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformInvokator, 394045866);
	template<> GAMECODE_API UClass* StaticClass<APlatformInvokator>()
	{
		return APlatformInvokator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformInvokator(Z_Construct_UClass_APlatformInvokator, &APlatformInvokator::StaticClass, TEXT("/Script/GameCode"), TEXT("APlatformInvokator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformInvokator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
