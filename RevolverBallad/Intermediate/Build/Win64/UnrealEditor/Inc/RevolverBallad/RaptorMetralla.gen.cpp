// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RevolverBallad/Public/Enemies/RaptorMetralla.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaptorMetralla() {}
// Cross Module References
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ARaptorMetralla_NoRegister();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ARaptorMetralla();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ARaptor();
	UPackage* Z_Construct_UPackage__Script_RevolverBallad();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARaptorMetralla::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot();
		P_NATIVE_END;
	}
	void ARaptorMetralla::StaticRegisterNativesARaptorMetralla()
	{
		UClass* Class = ARaptorMetralla::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Shoot", &ARaptorMetralla::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARaptorMetralla_Shoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaptorMetralla_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemies/RaptorMetralla.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaptorMetralla_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaptorMetralla, nullptr, "Shoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARaptorMetralla_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaptorMetralla_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARaptorMetralla_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaptorMetralla_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARaptorMetralla);
	UClass* Z_Construct_UClass_ARaptorMetralla_NoRegister()
	{
		return ARaptorMetralla::StaticClass();
	}
	struct Z_Construct_UClass_ARaptorMetralla_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Backpack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Backpack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaptorMetralla_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARaptor,
		(UObject* (*)())Z_Construct_UPackage__Script_RevolverBallad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARaptorMetralla_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARaptorMetralla_Shoot, "Shoot" }, // 3362040390
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaptorMetralla_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/RaptorMetralla.h" },
		{ "ModuleRelativePath", "Public/Enemies/RaptorMetralla.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaptorMetralla_Statics::NewProp_Backpack_MetaData[] = {
		{ "Category", "RaptorMetralla" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemies/RaptorMetralla.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaptorMetralla_Statics::NewProp_Backpack = { "Backpack", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaptorMetralla, Backpack), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaptorMetralla_Statics::NewProp_Backpack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaptorMetralla_Statics::NewProp_Backpack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARaptorMetralla_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaptorMetralla_Statics::NewProp_Backpack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaptorMetralla_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaptorMetralla>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaptorMetralla_Statics::ClassParams = {
		&ARaptorMetralla::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARaptorMetralla_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARaptorMetralla_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARaptorMetralla_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARaptorMetralla_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARaptorMetralla()
	{
		if (!Z_Registration_Info_UClass_ARaptorMetralla.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARaptorMetralla.OuterSingleton, Z_Construct_UClass_ARaptorMetralla_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARaptorMetralla.OuterSingleton;
	}
	template<> REVOLVERBALLAD_API UClass* StaticClass<ARaptorMetralla>()
	{
		return ARaptorMetralla::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARaptorMetralla);
	struct Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_RaptorMetralla_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_RaptorMetralla_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARaptorMetralla, ARaptorMetralla::StaticClass, TEXT("ARaptorMetralla"), &Z_Registration_Info_UClass_ARaptorMetralla, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARaptorMetralla), 3200505443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_RaptorMetralla_h_4134763375(TEXT("/Script/RevolverBallad"),
		Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_RaptorMetralla_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_RaptorMetralla_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
