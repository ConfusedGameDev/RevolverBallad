// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RevolverBallad/HUD/RevolverBalladHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevolverBalladHud() {}
// Cross Module References
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ARevolverBalladHud_NoRegister();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ARevolverBalladHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_RevolverBallad();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_UHUDOverlay_NoRegister();
// End Cross Module References
	void ARevolverBalladHud::StaticRegisterNativesARevolverBalladHud()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARevolverBalladHud);
	UClass* Z_Construct_UClass_ARevolverBalladHud_NoRegister()
	{
		return ARevolverBalladHud::StaticClass();
	}
	struct Z_Construct_UClass_ARevolverBalladHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDOverlayBase_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDOverlayBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARevolverBalladHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_RevolverBallad,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevolverBalladHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/RevolverBalladHud.h" },
		{ "ModuleRelativePath", "HUD/RevolverBalladHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevolverBalladHud_Statics::NewProp_HUDOverlayBase_MetaData[] = {
		{ "Category", "Revolver Ballad" },
		{ "ModuleRelativePath", "HUD/RevolverBalladHud.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARevolverBalladHud_Statics::NewProp_HUDOverlayBase = { "HUDOverlayBase", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevolverBalladHud, HUDOverlayBase), Z_Construct_UClass_UHUDOverlay_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARevolverBalladHud_Statics::NewProp_HUDOverlayBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevolverBalladHud_Statics::NewProp_HUDOverlayBase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARevolverBalladHud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevolverBalladHud_Statics::NewProp_HUDOverlayBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARevolverBalladHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARevolverBalladHud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARevolverBalladHud_Statics::ClassParams = {
		&ARevolverBalladHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARevolverBalladHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARevolverBalladHud_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARevolverBalladHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARevolverBalladHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARevolverBalladHud()
	{
		if (!Z_Registration_Info_UClass_ARevolverBalladHud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARevolverBalladHud.OuterSingleton, Z_Construct_UClass_ARevolverBalladHud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARevolverBalladHud.OuterSingleton;
	}
	template<> REVOLVERBALLAD_API UClass* StaticClass<ARevolverBalladHud>()
	{
		return ARevolverBalladHud::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARevolverBalladHud);
	struct Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_HUD_RevolverBalladHud_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_HUD_RevolverBalladHud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARevolverBalladHud, ARevolverBalladHud::StaticClass, TEXT("ARevolverBalladHud"), &Z_Registration_Info_UClass_ARevolverBalladHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARevolverBalladHud), 1103921024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_HUD_RevolverBalladHud_h_240545069(TEXT("/Script/RevolverBallad"),
		Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_HUD_RevolverBalladHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_HUD_RevolverBalladHud_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
