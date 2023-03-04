// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef REVOLVERBALLAD_DualPlayerController_generated_h
#error "DualPlayerController.generated.h already included, missing '#pragma once' in DualPlayerController.h"
#endif
#define REVOLVERBALLAD_DualPlayerController_generated_h

#define FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_SPARSE_DATA
#define FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateWeapons); \
	DECLARE_FUNCTION(execSwitchPlayer); \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execLightAttack); \
	DECLARE_FUNCTION(execGetRangedPlayerMesh); \
	DECLARE_FUNCTION(execGetMeleePlayerMesh);


#define FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateWeapons); \
	DECLARE_FUNCTION(execSwitchPlayer); \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execLightAttack); \
	DECLARE_FUNCTION(execGetRangedPlayerMesh); \
	DECLARE_FUNCTION(execGetMeleePlayerMesh);


#define FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADualPlayerController(); \
	friend struct Z_Construct_UClass_ADualPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADualPlayerController, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RevolverBallad"), NO_API) \
	DECLARE_SERIALIZER(ADualPlayerController)


#define FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_INCLASS \
private: \
	static void StaticRegisterNativesADualPlayerController(); \
	friend struct Z_Construct_UClass_ADualPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADualPlayerController, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RevolverBallad"), NO_API) \
	DECLARE_SERIALIZER(ADualPlayerController)


#define FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADualPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADualPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADualPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADualPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADualPlayerController(ADualPlayerController&&); \
	NO_API ADualPlayerController(const ADualPlayerController&); \
public:


#define FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADualPlayerController(ADualPlayerController&&); \
	NO_API ADualPlayerController(const ADualPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADualPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADualPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADualPlayerController)


#define FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_19_PROLOG
#define FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_SPARSE_DATA \
	FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_RPC_WRAPPERS \
	FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_INCLASS \
	FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_SPARSE_DATA \
	FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_INCLASS_NO_PURE_DECLS \
	FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REVOLVERBALLAD_API UClass* StaticClass<class ADualPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RevolverBallad_Source_RevolverBallad_Public_Player_DualPlayerController_h


#define FOREACH_ENUM_EPLAYERSTATE(op) \
	op(EPlayerState::EState_Melee) \
	op(EPlayerState::EState_Ranged) \
	op(EPlayerState::EState_Pause) \
	op(EPlayerState::EState_Dead) 

enum class EPlayerState : uint8;
template<> REVOLVERBALLAD_API UEnum* StaticEnum<EPlayerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
