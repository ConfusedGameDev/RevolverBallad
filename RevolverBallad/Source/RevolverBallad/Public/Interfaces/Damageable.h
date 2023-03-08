// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Damageable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDamageable : public UInterface
{
	GENERATED_BODY()
 
};

/**
 * 
 */

class REVOLVERBALLAD_API IDamageable
{
	GENERATED_BODY()
public:
	 
	
	UFUNCTION(BlueprintNativeEvent)
	void GetDamage(float Amount);
	UFUNCTION(BlueprintNativeEvent)
	float GetCurrentHealth();
	
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
};
