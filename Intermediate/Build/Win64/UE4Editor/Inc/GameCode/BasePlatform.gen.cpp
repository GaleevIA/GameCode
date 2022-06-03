// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameCode/BasePlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlatform() {}
// Cross Module References
	GAMECODE_API UEnum* Z_Construct_UEnum_GameCode_EPlatformBehavior();
	UPackage* Z_Construct_UPackage__Script_GameCode();
	GAMECODE_API UClass* Z_Construct_UClass_ABasePlatform_NoRegister();
	GAMECODE_API UClass* Z_Construct_UClass_ABasePlatform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	GAMECODE_API UClass* Z_Construct_UClass_APlatformInvokator_NoRegister();
// End Cross Module References
	static UEnum* EPlatformBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameCode_EPlatformBehavior, Z_Construct_UPackage__Script_GameCode(), TEXT("EPlatformBehavior"));
		}
		return Singleton;
	}
	template<> GAMECODE_API UEnum* StaticEnum<EPlatformBehavior>()
	{
		return EPlatformBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlatformBehavior(EPlatformBehavior_StaticEnum, TEXT("/Script/GameCode"), TEXT("EPlatformBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameCode_EPlatformBehavior_Hash() { return 3858356971U; }
	UEnum* Z_Construct_UEnum_GameCode_EPlatformBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameCode();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlatformBehavior"), 0, Get_Z_Construct_UEnum_GameCode_EPlatformBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlatformBehavior::OnDemand", (int64)EPlatformBehavior::OnDemand },
				{ "EPlatformBehavior::Loop", (int64)EPlatformBehavior::Loop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Loop.Name", "EPlatformBehavior::Loop" },
				{ "ModuleRelativePath", "BasePlatform.h" },
				{ "OnDemand.Name", "EPlatformBehavior::OnDemand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameCode,
				nullptr,
				"EPlatformBehavior",
				"EPlatformBehavior",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ABasePlatform::execPlatformTimelineTiltEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlatformTimelineTiltEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasePlatform::execPlatformTimelineTiltBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlatformTimelineTiltBegin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasePlatform::execPlatformInvokatorOnInvoked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlatformInvokatorOnInvoked();
		P_NATIVE_END;
	}
	void ABasePlatform::StaticRegisterNativesABasePlatform()
	{
		UClass* Class = ABasePlatform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlatformInvokatorOnInvoked", &ABasePlatform::execPlatformInvokatorOnInvoked },
			{ "PlatformTimelineTiltBegin", &ABasePlatform::execPlatformTimelineTiltBegin },
			{ "PlatformTimelineTiltEnd", &ABasePlatform::execPlatformTimelineTiltEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasePlatform_PlatformInvokatorOnInvoked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlatform_PlatformInvokatorOnInvoked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlatform_PlatformInvokatorOnInvoked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlatform, nullptr, "PlatformInvokatorOnInvoked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlatform_PlatformInvokatorOnInvoked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlatform_PlatformInvokatorOnInvoked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlatform_PlatformInvokatorOnInvoked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlatform_PlatformInvokatorOnInvoked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlatform, nullptr, "PlatformTimelineTiltBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasePlatform, nullptr, "PlatformTimelineTiltEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasePlatform_NoRegister()
	{
		return ABasePlatform::StaticClass();
	}
	struct Z_Construct_UClass_ABasePlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimelineCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformInvokator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformInvokator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameCode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasePlatform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasePlatform_PlatformInvokatorOnInvoked, "PlatformInvokatorOnInvoked" }, // 327328036
		{ &Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltBegin, "PlatformTimelineTiltBegin" }, // 1658982681
		{ &Z_Construct_UFunction_ABasePlatform_PlatformTimelineTiltEnd, "PlatformTimelineTiltEnd" }, // 1379255721
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasePlatform.h" },
		{ "ModuleRelativePath", "BasePlatform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMesh_MetaData[] = {
		{ "Category", "BasePlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, PlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_EndLocation_MetaData[] = {
		{ "Category", "BasePlatform" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "BasePlatform" },
		{ "ModuleRelativePath", "BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_TimelineCurve_MetaData[] = {
		{ "Category", "BasePlatform" },
		{ "ModuleRelativePath", "BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_TimelineCurve = { "TimelineCurve", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, TimelineCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_TimelineCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_TimelineCurve_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformBehavior_MetaData[] = {
		{ "Category", "BasePlatform" },
		{ "ModuleRelativePath", "BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformBehavior = { "PlatformBehavior", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, PlatformBehavior), Z_Construct_UEnum_GameCode_EPlatformBehavior, METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformInvokator_MetaData[] = {
		{ "Category", "BasePlatform" },
		{ "ModuleRelativePath", "BasePlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformInvokator = { "PlatformInvokator", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePlatform, PlatformInvokator), Z_Construct_UClass_APlatformInvokator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformInvokator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformInvokator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_TimelineCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlatform_Statics::NewProp_PlatformInvokator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlatform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasePlatform_Statics::ClassParams = {
		&ABasePlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABasePlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasePlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePlatform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasePlatform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasePlatform, 2860783099);
	template<> GAMECODE_API UClass* StaticClass<ABasePlatform>()
	{
		return ABasePlatform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasePlatform(Z_Construct_UClass_ABasePlatform, &ABasePlatform::StaticClass, TEXT("/Script/GameCode"), TEXT("ABasePlatform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlatform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
