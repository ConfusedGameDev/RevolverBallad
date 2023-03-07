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
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_ADualPlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARaptor::execOnAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaptor::execTrySetBlackBoardKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_KeyName);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrySetBlackBoardKey(Z_Param_KeyName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARaptor::execOnAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackEnd();
		P_NATIVE_END;
	}
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
			{ "OnAttack", &ARaptor::execOnAttack },
			{ "OnAttackEnd", &ARaptor::execOnAttackEnd },
			{ "OnSeeTarget", &ARaptor::execOnSeeTarget },
			{ "TrySetBlackBoardKey", &ARaptor::execTrySetBlackBoardKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARaptor_OnAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaptor_OnAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemies/Raptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaptor_OnAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaptor, nullptr, "OnAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARaptor_OnAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaptor_OnAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARaptor_OnAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaptor_OnAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARaptor_OnAttackEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaptor_OnAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemies/Raptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaptor_OnAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaptor, nullptr, "OnAttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARaptor_OnAttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaptor_OnAttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARaptor_OnAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaptor_OnAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics
	{
		struct Raptor_eventTrySetBlackBoardKey_Parms
		{
			FName KeyName;
			bool Value;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Raptor_eventTrySetBlackBoardKey_Parms, KeyName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((Raptor_eventTrySetBlackBoardKey_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Raptor_eventTrySetBlackBoardKey_Parms), &Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::NewProp_KeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemies/Raptor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARaptor, nullptr, "TrySetBlackBoardKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::Raptor_eventTrySetBlackBoardKey_Parms), Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanAttack_MetaData[];
#endif
		static void NewProp_bCanAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMinDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackMinDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackCoolOffTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCoolOffTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARaptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RevolverBallad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARaptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARaptor_OnAttack, "OnAttack" }, // 2242354545
		{ &Z_Construct_UFunction_ARaptor_OnAttackEnd, "OnAttackEnd" }, // 480934013
		{ &Z_Construct_UFunction_ARaptor_OnSeeTarget, "OnSeeTarget" }, // 201424504
		{ &Z_Construct_UFunction_ARaptor_TrySetBlackBoardKey, "TrySetBlackBoardKey" }, // 1110427413
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaptor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemies/Raptor.h" },
		{ "ModuleRelativePath", "Public/Enemies/Raptor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaptor_Statics::NewProp_AttackCollider_MetaData[] = {
		{ "Category", "Raptor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemies/Raptor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaptor_Statics::NewProp_AttackCollider = { "AttackCollider", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaptor, AttackCollider), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaptor_Statics::NewProp_AttackCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaptor_Statics::NewProp_AttackCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaptor_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "Raptor" },
		{ "ModuleRelativePath", "Public/Enemies/Raptor.h" },
	};
#endif
	void Z_Construct_UClass_ARaptor_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((ARaptor*)Obj)->bIsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARaptor_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARaptor), &Z_Construct_UClass_ARaptor_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARaptor_Statics::NewProp_bIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaptor_Statics::NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaptor_Statics::NewProp_bCanAttack_MetaData[] = {
		{ "Category", "Raptor" },
		{ "ModuleRelativePath", "Public/Enemies/Raptor.h" },
	};
#endif
	void Z_Construct_UClass_ARaptor_Statics::NewProp_bCanAttack_SetBit(void* Obj)
	{
		((ARaptor*)Obj)->bCanAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARaptor_Statics::NewProp_bCanAttack = { "bCanAttack", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARaptor), &Z_Construct_UClass_ARaptor_Statics::NewProp_bCanAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARaptor_Statics::NewProp_bCanAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaptor_Statics::NewProp_bCanAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaptor_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "Raptor" },
		{ "ModuleRelativePath", "Public/Enemies/Raptor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARaptor_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaptor, CurrentTarget), Z_Construct_UClass_ADualPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARaptor_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaptor_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaptor_Statics::NewProp_AttackMinDistance_MetaData[] = {
		{ "Category", "Raptor" },
		{ "ModuleRelativePath", "Public/Enemies/Raptor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaptor_Statics::NewProp_AttackMinDistance = { "AttackMinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaptor, AttackMinDistance), METADATA_PARAMS(Z_Construct_UClass_ARaptor_Statics::NewProp_AttackMinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaptor_Statics::NewProp_AttackMinDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARaptor_Statics::NewProp_AttackCoolOffTime_MetaData[] = {
		{ "Category", "Raptor" },
		{ "ModuleRelativePath", "Public/Enemies/Raptor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARaptor_Statics::NewProp_AttackCoolOffTime = { "AttackCoolOffTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARaptor, AttackCoolOffTime), METADATA_PARAMS(Z_Construct_UClass_ARaptor_Statics::NewProp_AttackCoolOffTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARaptor_Statics::NewProp_AttackCoolOffTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARaptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaptor_Statics::NewProp_AttackCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaptor_Statics::NewProp_bIsAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaptor_Statics::NewProp_bCanAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaptor_Statics::NewProp_CurrentTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaptor_Statics::NewProp_AttackMinDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARaptor_Statics::NewProp_AttackCoolOffTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARaptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARaptor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARaptor_Statics::ClassParams = {
		&ARaptor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARaptor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARaptor_Statics::PropPointers),
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
		{ Z_Construct_UClass_ARaptor, ARaptor::StaticClass, TEXT("ARaptor"), &Z_Registration_Info_UClass_ARaptor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARaptor), 821267714U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_Raptor_h_1254002075(TEXT("/Script/RevolverBallad"),
		Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_Raptor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Enemies_Raptor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
