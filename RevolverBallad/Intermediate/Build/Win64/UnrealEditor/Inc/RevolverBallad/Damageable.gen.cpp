// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RevolverBallad/Public/Interfaces/Damageable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageable() {}
// Cross Module References
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_UDamageable_NoRegister();
	REVOLVERBALLAD_API UClass* Z_Construct_UClass_UDamageable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_RevolverBallad();
// End Cross Module References
	DEFINE_FUNCTION(IDamageable::execGetCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IDamageable::execGetDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDamage_Implementation(Z_Param_Amount);
		P_NATIVE_END;
	}
	float IDamageable::GetCurrentHealth()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurrentHealth instead.");
		Damageable_eventGetCurrentHealth_Parms Parms;
		return Parms.ReturnValue;
	}
	void IDamageable::GetDamage(float Amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDamage instead.");
	}
	void UDamageable::StaticRegisterNativesUDamageable()
	{
		UClass* Class = UDamageable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentHealth", &IDamageable::execGetCurrentHealth },
			{ "GetDamage", &IDamageable::execGetDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamageable_GetCurrentHealth_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageable_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Damageable_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageable_GetCurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageable_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageable_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Damageable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageable_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageable, nullptr, "GetCurrentHealth", nullptr, nullptr, sizeof(Damageable_eventGetCurrentHealth_Parms), Z_Construct_UFunction_UDamageable_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_GetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageable_GetCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_GetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageable_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageable_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDamageable_GetDamage_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageable_GetDamage_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Damageable_eventGetDamage_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageable_GetDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageable_GetDamage_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageable_GetDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Damageable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageable_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageable, nullptr, "GetDamage", nullptr, nullptr, sizeof(Damageable_eventGetDamage_Parms), Z_Construct_UFunction_UDamageable_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_GetDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageable_GetDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_GetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageable_GetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageable_GetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageable);
	UClass* Z_Construct_UClass_UDamageable_NoRegister()
	{
		return UDamageable::StaticClass();
	}
	struct Z_Construct_UClass_UDamageable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RevolverBallad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageable_GetCurrentHealth, "GetCurrentHealth" }, // 454732856
		{ &Z_Construct_UFunction_UDamageable_GetDamage, "GetDamage" }, // 501230069
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Damageable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageable_Statics::ClassParams = {
		&UDamageable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageable()
	{
		if (!Z_Registration_Info_UClass_UDamageable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageable.OuterSingleton, Z_Construct_UClass_UDamageable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageable.OuterSingleton;
	}
	template<> REVOLVERBALLAD_API UClass* StaticClass<UDamageable>()
	{
		return UDamageable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageable);
	static FName NAME_UDamageable_GetCurrentHealth = FName(TEXT("GetCurrentHealth"));
	float IDamageable::Execute_GetCurrentHealth(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDamageable::StaticClass()));
		Damageable_eventGetCurrentHealth_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDamageable_GetCurrentHealth);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDamageable*)(O->GetNativeInterfaceAddress(UDamageable::StaticClass())))
		{
			Parms.ReturnValue = I->GetCurrentHealth_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UDamageable_GetDamage = FName(TEXT("GetDamage"));
	void IDamageable::Execute_GetDamage(UObject* O, float Amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDamageable::StaticClass()));
		Damageable_eventGetDamage_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDamageable_GetDamage);
		if (Func)
		{
			Parms.Amount=Amount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IDamageable*)(O->GetNativeInterfaceAddress(UDamageable::StaticClass())))
		{
			I->GetDamage_Implementation(Amount);
		}
	}
	struct Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageable, UDamageable::StaticClass, TEXT("UDamageable"), &Z_Registration_Info_UClass_UDamageable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageable), 2443672658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_885430894(TEXT("/Script/RevolverBallad"),
		Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
