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
	void SwitchCharacters(bool isMelee, float ActiveHealthPercent,float PassiveHealthPercent);
	void UpdateWeaponType(class  AWeapon* currentWeapon);
	UPROPERTY(EditDefaultsOnly, Category="Characters HUD")
	UTexture2D* ActiveMelee_TEX2D;
	UPROPERTY(EditDefaultsOnly, Category="Characters HUD")
	UTexture2D* ActiveRanged_TEX2D;
	UPROPERTY(EditDefaultsOnly, Category="Characters HUD")
	UTexture2D* PassiveRanged_TEX2D;
	UPROPERTY(EditDefaultsOnly, Category="Characters HUD")
	UTexture2D* PassiveMelee_TEX2D;
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
	UPROPERTY(meta=(BindWidget))
	UImage* CurrentWeapon_IMG;
	
	
};