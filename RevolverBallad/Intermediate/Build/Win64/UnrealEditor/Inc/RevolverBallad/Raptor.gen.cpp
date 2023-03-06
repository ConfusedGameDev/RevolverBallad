// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RevolverBallad/Public/Enemies/Raptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaptor() {}
// Cross Module References
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ARaptor_NoRegister();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ARaptor();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RevolverBallad();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARaptor::execOnSeeTarget)
	{
		P_GET_OBJECT(APawn,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSeeTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	void ARaptor::StaticRegisterNativesARaptor()
	{
		UClass* Class = ARaptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSeeTarget", &ARaptor::execOnSeeTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARaptor_OnSeeTarget_Statics
	{
		struct Raptor_eventOnSeeTarget_Parms
		{
			APawn* Target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARaptor_OnSeeTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Raptor_eventOnSeeTarget_Parms, Target), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaptor_OnSeeTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaptor_OnSeeTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaptor_OnSeeTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemies/Raptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaptor_OnSeeTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaptor, nullptr, "OnSeeTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARaptor_OnSeeTarget_Statics::Raptor_eventOnSeeTarget_Parms), Z_Construct_UFunction_ARaptor_OnSeeTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaptor_OnSeeTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARaptor_OnSeeTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaptor_OnSeeTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARaptor_OnSeeTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaptor_OnSeeTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARaptor);
	UClass* Z_Construct_UClass_ARaptor_NoRegister()
	{
		return ARaptor::StaticClass();
	}
	struct Z_Construct_UClass_ARaptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RevolverBallad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARaptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARaptor_OnSeeTarget, "OnSeeTarget" }, // 201424504
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaptor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/Raptor.h" },
		{ "ModuleRelativePath", "Public/Enemies/Raptor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaptor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaptor_Statics::ClassParams = {
		&ARaptor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARaptor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARaptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARaptor()
	{
		if (!Z_Registration_Info_UClass_ARaptor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARaptor.OuterSingleton, Z_Construct_UClass_ARaptor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARaptor.OuterSingleton;
	}
	template<> REVOLVERBALLAD_API UClass* StaticClass<ARaptor>()
	{
		return ARaptor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaptor);
	struct Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_Raptor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_Raptor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARaptor, ARaptor::StaticClass, TEXT("ARaptor"), &Z_Registration_Info_UClass_ARaptor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARaptor), 1029554702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_Raptor_h_1925359414(TEXT("/Script/RevolverBallad"),
		Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_Raptor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_Raptor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
