// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemies/Raptor.h"
#include "RaptorMetralla.generated.h"

/**
 * 
 */
UCLASS()
class REVOLVERBALLAD_API ARaptorMetralla : public ARaptor
{
 

private:
	GENERATED_BODY()
	ARaptorMetralla();
	UPROPERTY(EditDefaultsOnly)
	class UStaticMeshComponent* Backpack;
	virtual  void OnAttack() override;
	virtual  void OnAttackEnd() override;
	UFUNCTION(BlueprintCallable)
	void Shoot();
	
};
