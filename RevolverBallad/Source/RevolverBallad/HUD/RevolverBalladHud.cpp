// Fill out your copyright notice in the Description page of Project Settings.


#include "RevolverBalladHud.h"

#include "HUDOverlay.h"
#include "Blueprint/UserWidget.h"
#include "Player/DualPlayerController.h"

void ARevolverBalladHud::BeginPlay()
{
	Super::BeginPlay();
	UWorld* World= GetWorld();
	if(World)
	{
		APlayerController* Controller= World->GetFirstPlayerController();
		if(Controller && HUDOverlayBase)
		{
			UHUDOverlay* HUDOverlay= CreateWidget<UHUDOverlay>(Controller,HUDOverlayBase);
			HUDOverlay->AddToViewport();
			if(auto DualPlayerController= Cast<ADualPlayerController>(Controller->GetPawn()))
			{
				DualPlayerController->HudOverlay=HUDOverlay;
			}
		}
	}
}
