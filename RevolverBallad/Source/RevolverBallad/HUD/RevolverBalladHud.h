// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "RevolverBalladHud.generated.h"

/**
 * 
 */
class UHUDOverlay;
UCLASS()
class REVOLVERBALLAD_API ARevolverBalladHud : public AHUD
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, Category="Revolver Ballad")
	TSubclassOf<UHUDOverlay> HUDOverlayBase;

	

protected:
	virtual  void BeginPlay() override;
};
