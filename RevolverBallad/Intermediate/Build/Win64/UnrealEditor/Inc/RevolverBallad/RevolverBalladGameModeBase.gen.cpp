// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RevolverBallad/RevolverBalladGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevolverBalladGameModeBase() {}
// Cross Module References
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ARevolverBalladGameModeBase_NoRegister();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ARevolverBalladGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RevolverBallad();
// End Cross Module References
	void ARevolverBalladGameModeBase::StaticRegisterNativesARevolverBalladGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARevolverBalladGameModeBase);
	UClass* Z_Construct_UClass_ARevolverBalladGameModeBase_NoRegister()
	{
		return ARevolverBalladGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARevolverBalladGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARevolverBalladGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RevolverBallad,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevolverBalladGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RevolverBalladGameModeBase.h" },
		{ "ModuleRelativePath", "RevolverBalladGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARevolverBalladGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARevolverBalladGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARevolverBalladGameModeBase_Statics::ClassParams = {
		&ARevolverBalladGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARevolverBalladGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARevolverBalladGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARevolverBalladGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ARevolverBalladGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARevolverBalladGameModeBase.OuterSingleton, Z_Construct_UClass_ARevolverBalladGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARevolverBalladGameModeBase.OuterSingleton;
	}
	template<> REVOLVERBALLAD_API UClass* StaticClass<ARevolverBalladGameModeBase>()
	{
		return ARevolverBalladGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARevolverBalladGameModeBase);
	struct Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_RevolverBalladGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_RevolverBalladGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARevolverBalladGameModeBase, ARevolverBalladGameModeBase::StaticClass, TEXT("ARevolverBalladGameModeBase"), &Z_Registration_Info_UClass_ARevolverBalladGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARevolverBalladGameModeBase), 84841391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_RevolverBalladGameModeBase_h_127058738(TEXT("/Script/RevolverBallad"),
		Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_RevolverBalladGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_RevolverBalladGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
