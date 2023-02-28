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
		Ammo_TXT->SetText(FText::AsNumber(ammo));
	}
}

void UHUDOverlay::SwitchCharacters(bool isMelee, float ActiveHealthPercent,float PassiveHealthPercent)
{
	if(ActiveCharacter_IMG && PassiveCharacter_IMG)
	{
		if(isMelee)
		{
			if(ActiveMelee_TEX2D && PassiveRanged_TEX2D)
			{				
				PassiveCharacter_IMG->SetBrushFromTexture(PassiveRanged_TEX2D);
				ActiveCharacter_IMG->SetBrushFromTexture(ActiveMelee_TEX2D);
			}
		}
		else
		{
			if(PassiveMelee_TEX2D && ActiveRanged_TEX2D)
			{				
				PassiveCharacter_IMG->SetBrushFromTexture(PassiveMelee_TEX2D);
				ActiveCharacter_IMG->SetBrushFromTexture(ActiveRanged_TEX2D);
			}
		}
	}
	if(HealthPassive_ProgressBar && HealthActive_ProgressBar)
	{
 		HealthPassive_ProgressBar->Percent= ActiveHealthPercent;
		HealthActive_ProgressBar->Percent= PassiveHealthPercent;
	}
}
