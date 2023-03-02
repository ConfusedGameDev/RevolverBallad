// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/Character.h"
#include "DualPlayerController.generated.h"
UCLASS()
class REVOLVERBALLAD_API ADualPlayerController : public APawn
{
	GENERATED_BODY()

public:

	
	enum class EPlayerState
	{
		EState_Melee,
		EState_Ranged,
		EState_Pause,
		EState_Dead,
		
	};
	EPlayerState PlayerState= EPlayerState::EState_Melee;
	// Sets default values for this character's properties
	ADualPlayerController();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCapsuleComponent* CapsuleComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* PlayersHolder;
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
	FVector HaircrossPosition;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HairCrossOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* HairCross;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float maxHealth=100;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float currentHealthMelee=100;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float currentHealthRanged=100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CurrentAmmo=99;
	UPROPERTY(EditAnywhere)
	float RotationSpeed=100;
	UFUNCTION(BlueprintCallable)
	USkeletalMeshComponent* GetMeleePlayerMesh();
	UFUNCTION(BlueprintCallable)
	USkeletalMeshComponent* GetRangedPlayerMesh();

	//INPUT
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Input_GamePlay")
	class UInputMappingContext* InGamePlayerInputContext;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Input_GamePlay")
	class UInputAction* ShootInputAction;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Input_GamePlay")
	class UInputAction* MoveInputAction;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Input_GamePlay")
	class UInputAction* SwitchCharacterInputAction;

	void OnShoot(const FInputActionValue& Value);
	void OnMove(const FInputActionValue& Value);
	void OnSwitchCharacter(const FInputActionValue& Value);
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable)
	void Shoot();
	UFUNCTION(BlueprintCallable)
	void GetDamage(float DamageAmount);
	UFUNCTION(BlueprintCallable)
	void SwitchPlayer();

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
