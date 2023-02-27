// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDOverlay.generated.h"

/**
 * 
 */
UCLASS()
class REVOLVERBALLAD_API UHUDOverlay : public UUserWidget
{
	GENERATED_BODY()
public:
	void SetActiveHealthBarPercent(float Percent);
	void SetPassiveHealthBarPercent(float Percent);
	void UpdateAmmo(int ammo);
	void SwitchCharacters();
private:
	UPROPERTY(meta=(BindWidget))
	class UProgressBar* HealthActive_ProgressBar;
	UPROPERTY(meta=(BindWidget))
	UProgressBar* HealthPassive_ProgressBar;
	UPROPERTY(meta=(BindWidget))
	class UTextBlock* Ammo_TXT;

	UPROPERTY(meta=(BindWidget))
	class UImage* ActiveCharacter_IMG;
	UPROPERTY(meta=(BindWidget))
	UImage* PassiveCharacter_IMG;
	
	
};