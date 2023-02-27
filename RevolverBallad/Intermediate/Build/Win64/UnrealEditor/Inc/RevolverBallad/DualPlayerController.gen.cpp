// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RevolverBallad/Public/Player/DualPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDualPlayerController() {}
// Cross Module References
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ADualPlayerController_NoRegister();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ADualPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_RevolverBallad();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_UHUDOverlay_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADualPlayerController::execGetRangedPlayerMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetRangedPlayerMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADualPlayerController::execGetMeleePlayerMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMeleePlayerMesh();
		P_NATIVE_END;
	}
	void ADualPlayerController::StaticRegisterNativesADualPlayerController()
	{
		UClass* Class = ADualPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMeleePlayerMesh", &ADualPlayerController::execGetMeleePlayerMesh },
			{ "GetRangedPlayerMesh", &ADualPlayerController::execGetRangedPlayerMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics
	{
		struct DualPlayerController_eventGetMeleePlayerMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DualPlayerController_eventGetMeleePlayerMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADualPlayerController, nullptr, "GetMeleePlayerMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::DualPlayerController_eventGetMeleePlayerMesh_Parms), Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics
	{
		struct DualPlayerController_eventGetRangedPlayerMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DualPlayerController_eventGetRangedPlayerMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADualPlayerController, nullptr, "GetRangedPlayerMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::DualPlayerController_eventGetRangedPlayerMesh_Parms), Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADualPlayerController);
	UClass* Z_Construct_UClass_ADualPlayerController_NoRegister()
	{
		return ADualPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ADualPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player2MSKM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player2MSKM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player1MSKM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player1MSKM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RangedWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HudOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HudOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentAmmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADualPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RevolverBallad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADualPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh, "GetMeleePlayerMesh" }, // 2390512655
		{ &Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh, "GetRangedPlayerMesh" }, // 2757765786
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/DualPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Player2MSKM_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Player2MSKM = { "Player2MSKM", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, Player2MSKM), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Player2MSKM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Player2MSKM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Player1MSKM_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Player1MSKM = { "Player1MSKM", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, Player1MSKM), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Player1MSKM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Player1MSKM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MeleeWeapon_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MeleeWeapon = { "MeleeWeapon", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, MeleeWeapon), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MeleeWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MeleeWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RangedWeapon_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RangedWeapon = { "RangedWeapon", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, RangedWeapon), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RangedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RangedWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HudOverlay_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HudOverlay = { "HudOverlay", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, HudOverlay), Z_Construct_UClass_UHUDOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HudOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HudOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, maxHealth), METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealth_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, currentHealth), METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentAmmo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADualPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CapsuleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Player2MSKM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Player1MSKM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MeleeWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RangedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HudOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentAmmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADualPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADualPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADualPlayerController_Statics::ClassParams = {
		&ADualPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADualPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADualPlayerController()
	{
		if (!Z_Registration_Info_UClass_ADualPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADualPlayerController.OuterSingleton, Z_Construct_UClass_ADualPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADualPlayerController.OuterSingleton;
	}
	template<> REVOLVERBALLAD_API UClass* StaticClass<ADualPlayerController>()
	{
		return ADualPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADualPlayerController);
	struct Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADualPlayerController, ADualPlayerController::StaticClass, TEXT("ADualPlayerController"), &Z_Registration_Info_UClass_ADualPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADualPlayerController), 3106781921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_383064236(TEXT("/Script/RevolverBallad"),
		Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS