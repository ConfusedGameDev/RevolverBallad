// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REVOLVERBALLAD_Damageable_generated_h
#error "Damageable.generated.h already included, missing '#pragma once' in Damageable.h"
#endif
#define REVOLVERBALLAD_Damageable_generated_h

#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_SPARSE_DATA
#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_RPC_WRAPPERS \
	virtual float GetCurrentHealth_Implementation() { return 0; }; \
	virtual void GetDamage_Implementation(float Amount) {}; \
 \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetDamage);


#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetCurrentHealth_Implementation() { return 0; }; \
	virtual void GetDamage_Implementation(float Amount) {}; \
 \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetDamage);


#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_EVENT_PARMS \
	struct Damageable_eventGetCurrentHealth_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Damageable_eventGetCurrentHealth_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct Damageable_eventGetDamage_Parms \
	{ \
		float Amount; \
	};


#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_CALLBACK_WRAPPERS
#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REVOLVERBALLAD_API UDamageable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REVOLVERBALLAD_API, UDamageable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	REVOLVERBALLAD_API UDamageable(UDamageable&&); \
	REVOLVERBALLAD_API UDamageable(const UDamageable&); \
public:


#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REVOLVERBALLAD_API UDamageable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	REVOLVERBALLAD_API UDamageable(UDamageable&&); \
	REVOLVERBALLAD_API UDamageable(const UDamageable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REVOLVERBALLAD_API, UDamageable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageable)


#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageable(); \
	friend struct Z_Construct_UClass_UDamageable_Statics; \
public: \
	DECLARE_CLASS(UDamageable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RevolverBallad"), REVOLVERBALLAD_API) \
	DECLARE_SERIALIZER(UDamageable)


#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageable() {} \
public: \
	typedef UDamageable UClassType; \
	typedef IDamageable ThisClass; \
	static float Execute_GetCurrentHealth(UObject* O); \
	static void Execute_GetDamage(UObject* O, float Amount); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IDamageable() {} \
public: \
	typedef UDamageable UClassType; \
	typedef IDamageable ThisClass; \
	static float Execute_GetCurrentHealth(UObject* O); \
	static void Execute_GetDamage(UObject* O, float Amount); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_10_PROLOG \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_EVENT_PARMS


#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_SPARSE_DATA \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_RPC_WRAPPERS \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_CALLBACK_WRAPPERS \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_SPARSE_DATA \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_CALLBACK_WRAPPERS \
	FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REVOLVERBALLAD_API UClass* StaticClass<class UDamageable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RevolverBallad_Source_RevolverBallad_Public_Interfaces_Damageable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
