// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/Damageable.h"
#include "Raptor.generated.h"

UCLASS()
class REVOLVERBALLAD_API ARaptor : public ACharacter , public IDamageable
{
	GENERATED_BODY()

	class UPawnSensingComponent* PawnSensingComponent;
public:
	// Sets default values for this character's properties
	ARaptor();
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCapsuleComponent* AttackCollider;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bIsAttacking;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bCanAttack;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bGetDamage;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class ADualPlayerController* CurrentTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackMinDistance=155;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackCoolOffTime=3.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth=100;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	float CurrentHealth=0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isDead=false;
	UFUNCTION()
	void OnSeeTarget( APawn* Target);
	
	UFUNCTION(BlueprintCallable)
	virtual void OnAttackEnd();
	UFUNCTION(BlueprintCallable)
	void TrySetBlackBoardKey(FName KeyName, bool Value);
	UFUNCTION(BlueprintCallable)
	virtual  void OnAttack();
	UFUNCTION(BlueprintCallable)
	void DamageComplete();

	virtual  float GetCurrentHealth_Implementation() override;
	virtual  void GetDamage_Implementation(float Amount) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
