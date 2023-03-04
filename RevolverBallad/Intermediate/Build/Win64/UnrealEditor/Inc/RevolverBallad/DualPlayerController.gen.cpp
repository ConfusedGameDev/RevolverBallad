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
	REVOLVERBALLAD_API UEnum* Z_Construct_UEnum_RevolverBallad_EPlayerState();
	UPackage* Z_Construct_UPackage__Script_RevolverBallad();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ADualPlayerController_NoRegister();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ADualPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_UHUDOverlay_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerState;
	static UEnum* EPlayerState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RevolverBallad_EPlayerState, Z_Construct_UPackage__Script_RevolverBallad(), TEXT("EPlayerState"));
		}
		return Z_Registration_Info_UEnum_EPlayerState.OuterSingleton;
	}
	template<> REVOLVERBALLAD_API UEnum* StaticEnum<EPlayerState>()
	{
		return EPlayerState_StaticEnum();
	}
	struct Z_Construct_UEnum_RevolverBallad_EPlayerState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RevolverBallad_EPlayerState_Statics::Enumerators[] = {
		{ "EPlayerState::EState_Melee", (int64)EPlayerState::EState_Melee },
		{ "EPlayerState::EState_Ranged", (int64)EPlayerState::EState_Ranged },
		{ "EPlayerState::EState_Pause", (int64)EPlayerState::EState_Pause },
		{ "EPlayerState::EState_Dead", (int64)EPlayerState::EState_Dead },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RevolverBallad_EPlayerState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EState_Dead.\"Dead\"", "" },
		{ "EState_Dead.Name", "EPlayerState::EState_Dead" },
		{ "EState_Melee.\"Melee\"", "" },
		{ "EState_Melee.Name", "EPlayerState::EState_Melee" },
		{ "EState_Pause.\"Pause\"", "" },
		{ "EState_Pause.Name", "EPlayerState::EState_Pause" },
		{ "EState_Ranged.\"Ranged\"", "" },
		{ "EState_Ranged.Name", "EPlayerState::EState_Ranged" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RevolverBallad_EPlayerState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RevolverBallad,
		nullptr,
		"EPlayerState",
		"EPlayerState",
		Z_Construct_UEnum_RevolverBallad_EPlayerState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RevolverBallad_EPlayerState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RevolverBallad_EPlayerState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RevolverBallad_EPlayerState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RevolverBallad_EPlayerState()
	{
		if (!Z_Registration_Info_UEnum_EPlayerState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerState.InnerSingleton, Z_Construct_UEnum_RevolverBallad_EPlayerState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerState.InnerSingleton;
	}
	DEFINE_FUNCTION(ADualPlayerController::execUpdateWeapons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWeapons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADualPlayerController::execSwitchPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADualPlayerController::execGetDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDamage(Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADualPlayerController::execLightAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LightAttack();
		P_NATIVE_END;
	}
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
			{ "GetDamage", &ADualPlayerController::execGetDamage },
			{ "GetMeleePlayerMesh", &ADualPlayerController::execGetMeleePlayerMesh },
			{ "GetRangedPlayerMesh", &ADualPlayerController::execGetRangedPlayerMesh },
			{ "LightAttack", &ADualPlayerController::execLightAttack },
			{ "SwitchPlayer", &ADualPlayerController::execSwitchPlayer },
			{ "UpdateWeapons", &ADualPlayerController::execUpdateWeapons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADualPlayerController_GetDamage_Statics
	{
		struct DualPlayerController_eventGetDamage_Parms
		{
			float DamageAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADualPlayerController_GetDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DualPlayerController_eventGetDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADualPlayerController_GetDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADualPlayerController_GetDamage_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADualPlayerController_GetDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADualPlayerController_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADualPlayerController, nullptr, "GetDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADualPlayerController_GetDamage_Statics::DualPlayerController_eventGetDamage_Parms), Z_Construct_UFunction_ADualPlayerController_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADualPlayerController_GetDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADualPlayerController_GetDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADualPlayerController_GetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADualPlayerController_GetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADualPlayerController_GetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_ADualPlayerController_LightAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADualPlayerController_LightAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADualPlayerController_LightAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADualPlayerController, nullptr, "LightAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADualPlayerController_LightAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADualPlayerController_LightAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADualPlayerController_LightAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADualPlayerController_LightAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADualPlayerController_SwitchPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADualPlayerController_SwitchPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADualPlayerController_SwitchPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADualPlayerController, nullptr, "SwitchPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADualPlayerController_SwitchPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADualPlayerController_SwitchPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADualPlayerController_SwitchPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADualPlayerController_SwitchPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADualPlayerController_UpdateWeapons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADualPlayerController_UpdateWeapons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADualPlayerController_UpdateWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADualPlayerController, nullptr, "UpdateWeapons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADualPlayerController_UpdateWeapons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADualPlayerController_UpdateWeapons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADualPlayerController_UpdateWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADualPlayerController_UpdateWeapons_Statics::FuncParams);
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPlayerState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayersHolder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayersHolder;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeShield_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeShield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangedShield_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RangedShield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HudOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HudOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HaircrossPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HaircrossPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairCrossOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HairCrossOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairCross_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HairCross;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentHealthMelee_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHealthMelee;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentHealthRanged_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHealthRanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attacking_MetaData[];
#endif
		static void NewProp_Attacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Attacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanAttack_MetaData[];
#endif
		static void NewProp_CanAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isJumping_MetaData[];
#endif
		static void NewProp_isJumping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isJumping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGamePlayerInputContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGamePlayerInputContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightAttackInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LightAttackInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchCharacterInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchCharacterInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADualPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RevolverBallad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADualPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADualPlayerController_GetDamage, "GetDamage" }, // 1122539027
		{ &Z_Construct_UFunction_ADualPlayerController_GetMeleePlayerMesh, "GetMeleePlayerMesh" }, // 2390512655
		{ &Z_Construct_UFunction_ADualPlayerController_GetRangedPlayerMesh, "GetRangedPlayerMesh" }, // 2757765786
		{ &Z_Construct_UFunction_ADualPlayerController_LightAttack, "LightAttack" }, // 3811582202
		{ &Z_Construct_UFunction_ADualPlayerController_SwitchPlayer, "SwitchPlayer" }, // 3914603364
		{ &Z_Construct_UFunction_ADualPlayerController_UpdateWeapons, "UpdateWeapons" }, // 1070457729
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/DualPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentPlayerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentPlayerState_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentPlayerState = { "CurrentPlayerState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, CurrentPlayerState), Z_Construct_UEnum_RevolverBallad_EPlayerState, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentPlayerState_MetaData)) }; // 504311801
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_PlayersHolder_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_PlayersHolder = { "PlayersHolder", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, PlayersHolder), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_PlayersHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_PlayersHolder_MetaData)) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MeleeShield_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MeleeShield = { "MeleeShield", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, MeleeShield), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MeleeShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MeleeShield_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RangedShield_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RangedShield = { "RangedShield", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, RangedShield), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RangedShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RangedShield_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HudOverlay_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HudOverlay = { "HudOverlay", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, HudOverlay), Z_Construct_UClass_UHUDOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HudOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HudOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HaircrossPosition_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HaircrossPosition = { "HaircrossPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, HaircrossPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HaircrossPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HaircrossPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HairCrossOffset_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HairCrossOffset = { "HairCrossOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, HairCrossOffset), METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HairCrossOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HairCrossOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HairCross_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HairCross = { "HairCross", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, HairCross), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HairCross_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HairCross_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, maxHealth), METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealthMelee_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealthMelee = { "currentHealthMelee", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, currentHealthMelee), METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealthMelee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealthMelee_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealthRanged_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealthRanged = { "currentHealthRanged", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, currentHealthRanged), METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealthRanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealthRanged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, MovementSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Attacking_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Attacking_SetBit(void* Obj)
	{
		((ADualPlayerController*)Obj)->Attacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Attacking = { "Attacking", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADualPlayerController), &Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Attacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Attacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Attacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CanAttack_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CanAttack_SetBit(void* Obj)
	{
		((ADualPlayerController*)Obj)->CanAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CanAttack = { "CanAttack", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADualPlayerController), &Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CanAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CanAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CanAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_JumpForce_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, JumpForce), METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_JumpForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_JumpForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_isJumping_MetaData[] = {
		{ "Category", "DualPlayerController" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ADualPlayerController_Statics::NewProp_isJumping_SetBit(void* Obj)
	{
		((ADualPlayerController*)Obj)->isJumping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_isJumping = { "isJumping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADualPlayerController), &Z_Construct_UClass_ADualPlayerController_Statics::NewProp_isJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_isJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_isJumping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_InGamePlayerInputContext_MetaData[] = {
		{ "Category", "Input_GamePlay" },
		{ "Comment", "//INPUT\n" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
		{ "ToolTip", "INPUT" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_InGamePlayerInputContext = { "InGamePlayerInputContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, InGamePlayerInputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_InGamePlayerInputContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_InGamePlayerInputContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_LightAttackInputAction_MetaData[] = {
		{ "Category", "Input_GamePlay" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_LightAttackInputAction = { "LightAttackInputAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, LightAttackInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_LightAttackInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_LightAttackInputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MoveInputAction_MetaData[] = {
		{ "Category", "Input_GamePlay" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MoveInputAction = { "MoveInputAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, MoveInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MoveInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MoveInputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_SwitchCharacterInputAction_MetaData[] = {
		{ "Category", "Input_GamePlay" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_SwitchCharacterInputAction = { "SwitchCharacterInputAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, SwitchCharacterInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_SwitchCharacterInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_SwitchCharacterInputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADualPlayerController_Statics::NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input_GamePlay" },
		{ "ModuleRelativePath", "Public/Player/DualPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADualPlayerController_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADualPlayerController, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADualPlayerController_Statics::NewProp_JumpAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADualPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentPlayerState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentPlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CapsuleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_PlayersHolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Player2MSKM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Player1MSKM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MeleeWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RangedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MeleeShield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RangedShield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HudOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HaircrossPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HairCrossOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_HairCross,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealthMelee,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_currentHealthRanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_Attacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CanAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_CurrentAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_JumpForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_isJumping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_InGamePlayerInputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_LightAttackInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_MoveInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_SwitchCharacterInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADualPlayerController_Statics::NewProp_JumpAction,
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_Statics::EnumInfo[] = {
		{ EPlayerState_StaticEnum, TEXT("EPlayerState"), &Z_Registration_Info_UEnum_EPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 504311801U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADualPlayerController, ADualPlayerController::StaticClass, TEXT("ADualPlayerController"), &Z_Registration_Info_UClass_ADualPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADualPlayerController), 4053868569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_3834469542(TEXT("/Script/RevolverBallad"),
		Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
