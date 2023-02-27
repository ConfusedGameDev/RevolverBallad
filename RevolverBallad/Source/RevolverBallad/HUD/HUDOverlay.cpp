// Fill out your copyright notice in the Description page of Project Settings.


#include "HUDOverlay.h"

#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UHUDOverlay::SetActiveHealthBarPercent(float Percent)
{
	if(HealthActive_ProgressBar)
	{
		HealthActive_ProgressBar->SetPercent(Percent);
	}
}

void UHUDOverlay::SetPassiveHealthBarPercent(float Percent)
{
	if(HealthPassive_ProgressBar)
	{
		HealthPassive_ProgressBar->SetPercent(Percent);
	}
}

void UHUDOverlay::UpdateAmmo(int ammo)
{
	if(Ammo_TXT)
	{
		Ammo_TXT->Text=FText::AsNumber(ammo);
	}
}

void UHUDOverlay::SwitchCharacters()
{
	if(ActiveCharacter_IMG && PassiveCharacter_IMG)
	{
		const auto OriginalPassiveImage= PassiveCharacter_IMG->Brush;
		PassiveCharacter_IMG->SetBrush(ActiveCharacter_IMG->Brush);
		ActiveCharacter_IMG->SetBrush(OriginalPassiveImage);		
	}
	if(HealthPassive_ProgressBar && HealthActive_ProgressBar)
	{
		const auto OriginalPassiveLife= HealthPassive_ProgressBar->Percent;
		HealthPassive_ProgressBar->Percent= HealthActive_ProgressBar->Percent;
		HealthActive_ProgressBar->Percent= OriginalPassiveLife;
	}
}
