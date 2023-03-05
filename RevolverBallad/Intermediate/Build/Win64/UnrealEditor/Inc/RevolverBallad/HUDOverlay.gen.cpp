// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RevolverBallad/HUD/HUDOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDOverlay() {}
// Cross Module References
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_UHUDOverlay_NoRegister();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_UHUDOverlay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RevolverBallad();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UHUDOverlay::StaticRegisterNativesUHUDOverlay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHUDOverlay);
	UClass* Z_Construct_UClass_UHUDOverlay_NoRegister()
	{
		return UHUDOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UHUDOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMelee_TEX2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveMelee_TEX2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRanged_TEX2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveRanged_TEX2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassiveRanged_TEX2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PassiveRanged_TEX2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassiveMelee_TEX2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PassiveMelee_TEX2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthActive_ProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthActive_ProgressBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPassive_ProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthPassive_ProgressBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ammo_TXT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ammo_TXT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCharacter_IMG_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveCharacter_IMG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassiveCharacter_IMG_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PassiveCharacter_IMG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_IMG_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon_IMG;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHUDOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RevolverBallad,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDOverlay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/HUDOverlay.h" },
		{ "ModuleRelativePath", "HUD/HUDOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveMelee_TEX2D_MetaData[] = {
		{ "Category", "Characters HUD" },
		{ "ModuleRelativePath", "HUD/HUDOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveMelee_TEX2D = { "ActiveMelee_TEX2D", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDOverlay, ActiveMelee_TEX2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveMelee_TEX2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveMelee_TEX2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveRanged_TEX2D_MetaData[] = {
		{ "Category", "Characters HUD" },
		{ "ModuleRelativePath", "HUD/HUDOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveRanged_TEX2D = { "ActiveRanged_TEX2D", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDOverlay, ActiveRanged_TEX2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveRanged_TEX2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveRanged_TEX2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveRanged_TEX2D_MetaData[] = {
		{ "Category", "Characters HUD" },
		{ "ModuleRelativePath", "HUD/HUDOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveRanged_TEX2D = { "PassiveRanged_TEX2D", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDOverlay, PassiveRanged_TEX2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveRanged_TEX2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveRanged_TEX2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveMelee_TEX2D_MetaData[] = {
		{ "Category", "Characters HUD" },
		{ "ModuleRelativePath", "HUD/HUDOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveMelee_TEX2D = { "PassiveMelee_TEX2D", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDOverlay, PassiveMelee_TEX2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveMelee_TEX2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveMelee_TEX2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDOverlay_Statics::NewProp_HealthActive_ProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/HUDOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDOverlay_Statics::NewProp_HealthActive_ProgressBar = { "HealthActive_ProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDOverlay, HealthActive_ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_HealthActive_ProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_HealthActive_ProgressBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDOverlay_Statics::NewProp_HealthPassive_ProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/HUDOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDOverlay_Statics::NewProp_HealthPassive_ProgressBar = { "HealthPassive_ProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDOverlay, HealthPassive_ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_HealthPassive_ProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_HealthPassive_ProgressBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDOverlay_Statics::NewProp_Ammo_TXT_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/HUDOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDOverlay_Statics::NewProp_Ammo_TXT = { "Ammo_TXT", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDOverlay, Ammo_TXT), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_Ammo_TXT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_Ammo_TXT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveCharacter_IMG_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/HUDOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveCharacter_IMG = { "ActiveCharacter_IMG", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDOverlay, ActiveCharacter_IMG), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveCharacter_IMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveCharacter_IMG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveCharacter_IMG_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/HUDOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveCharacter_IMG = { "PassiveCharacter_IMG", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDOverlay, PassiveCharacter_IMG), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveCharacter_IMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveCharacter_IMG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDOverlay_Statics::NewProp_CurrentWeapon_IMG_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/HUDOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDOverlay_Statics::NewProp_CurrentWeapon_IMG = { "CurrentWeapon_IMG", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDOverlay, CurrentWeapon_IMG), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_CurrentWeapon_IMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDOverlay_Statics::NewProp_CurrentWeapon_IMG_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHUDOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveMelee_TEX2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveRanged_TEX2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveRanged_TEX2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveMelee_TEX2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDOverlay_Statics::NewProp_HealthActive_ProgressBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDOverlay_Statics::NewProp_HealthPassive_ProgressBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDOverlay_Statics::NewProp_Ammo_TXT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDOverlay_Statics::NewProp_ActiveCharacter_IMG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDOverlay_Statics::NewProp_PassiveCharacter_IMG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDOverlay_Statics::NewProp_CurrentWeapon_IMG,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHUDOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHUDOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHUDOverlay_Statics::ClassParams = {
		&UHUDOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHUDOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHUDOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHUDOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHUDOverlay()
	{
		if (!Z_Registration_Info_UClass_UHUDOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHUDOverlay.OuterSingleton, Z_Construct_UClass_UHUDOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHUDOverlay.OuterSingleton;
	}
	template<> REVOLVERBALLAD_API UClass* StaticClass<UHUDOverlay>()
	{
		return UHUDOverlay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHUDOverlay);
	struct Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_HUD_HUDOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_HUD_HUDOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHUDOverlay, UHUDOverlay::StaticClass, TEXT("UHUDOverlay"), &Z_Registration_Info_UClass_UHUDOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHUDOverlay), 2045790310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_HUD_HUDOverlay_h_2448773229(TEXT("/Script/RevolverBallad"),
		Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_HUD_HUDOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_HUD_HUDOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
