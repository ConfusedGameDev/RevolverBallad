 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bullet.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

 UENUM()
 enum class EWeaponType:uint8
 {
	 EMelee UMETA("Melee Weapon"),
 	 ERanged UMETA("Ranged Weapon"),
 	 EDefense UMETA("Defense Weapon"),
 	
 };

UCLASS()
class REVOLVERBALLAD_API AWeapon : public AActor
{
	GENERATED_BODY()
	
	
	
	
	
public:	
	// Sets default values for this actor's properties
	AWeapon();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Data")
	class UStaticMeshComponent* WeaponMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Data")
	class USceneComponent* WeaponShootPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Data")
	int ammo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Data")
	class UTexture2D* weaponIconTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Data")
	EWeaponType WeaponType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Data")
	FString WeaponName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Data")
	TSubclassOf<class ABullet> BulletType;
	
	void ToggleWeapon(bool isActive);

	void Attack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
