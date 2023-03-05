// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/Character.h"
#include "DualPlayerController.generated.h"

UENUM(BlueprintType)
enum class EPlayerState:uint8
{
	EState_Melee UMETA("Melee"),
	EState_Ranged UMETA("Ranged"),
	EState_Pause UMETA("Pause"),
	EState_Dead UMETA("Dead"),
		
};
UCLASS()
class REVOLVERBALLAD_API ADualPlayerController : public APawn
{
	GENERATED_BODY()

public:
	
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	EPlayerState CurrentPlayerState= EPlayerState::EState_Melee;
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

	//WEAPONS
	/*
	 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeleeWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* RangedWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeleeShield;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* RangedShield;
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AWeapon> DefaultMeleeWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AWeapon> DefaultRangedWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AWeapon> DefaultRangedShield;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AWeapon> DefaultMeleeShield;

	AWeapon* CurrentMeleeWeapon;
	AWeapon* CurrentMeleeShield;
	AWeapon* CurrentRangedWeapon;
	AWeapon* CurrentRangedShield;

	void InitializeWeapons();
	void SetupWeapons(TSubclassOf<AWeapon> newWeapon, UPrimitiveComponent* WeaponOwner, AWeapon* &WeaponRef);
	
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FVector MovementSpeed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool Attacking;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool CanAttack=true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CurrentAmmo=99;
	UPROPERTY(EditAnywhere)
	float RotationSpeed=100;
	UFUNCTION(BlueprintCallable)
	USkeletalMeshComponent* GetMeleePlayerMesh();
	UFUNCTION(BlueprintCallable)
	USkeletalMeshComponent* GetRangedPlayerMesh();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float JumpForce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isJumping;
	
	//INPUT
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Input_GamePlay")
	class UInputMappingContext* InGamePlayerInputContext;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Input_GamePlay")
	class UInputAction* LightAttackInputAction;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Input_GamePlay")
	class UInputAction* MoveInputAction;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Input_GamePlay")
	class UInputAction* SwitchCharacterInputAction;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category="Input_GamePlay")
	class UInputAction* JumpAction;
	
	void onLightAttack(const FInputActionValue& Value);
	void onLightAttackEnd(const FInputActionValue& Value);
	void OnMove(const FInputActionValue& Value);
	void OnMoveStop(const FInputActionValue& Value);
	void OnSwitchCharacter(const FInputActionValue& Value);
	void OnJump(const FInputActionValue& Value);
	void OnJumpEnd(const FInputActionValue& Value);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable)
	void LightAttack();
	UFUNCTION(BlueprintCallable)
	void GetDamage(float DamageAmount);
	UFUNCTION(BlueprintCallable)
	void SwitchPlayer();
	UFUNCTION(BlueprintCallable)
	void UpdateWeapons();
	

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
