// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DualPlayerController.generated.h"

UCLASS()
class REVOLVERBALLAD_API ADualPlayerController : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADualPlayerController();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCapsuleComponent* CapsuleComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USpringArmComponent* SpringArmComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCameraComponent* CameraComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* Player2MSKM;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* Player1MSKM;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeleeWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* RangedWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UHUDOverlay* HudOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float maxHealth=100;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float currentHealth=100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CurrentAmmo=99;
	
	UFUNCTION(BlueprintCallable)
	USkeletalMeshComponent* GetMeleePlayerMesh();
	UFUNCTION(BlueprintCallable)
	USkeletalMeshComponent* GetRangedPlayerMesh();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
