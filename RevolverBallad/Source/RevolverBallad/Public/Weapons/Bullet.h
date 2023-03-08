// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class REVOLVERBALLAD_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Weapon Data")
	class UStaticMeshComponent* BulletMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Weapon Data")
	class USphereComponent* BulletCollider;
	UPROPERTY(EditAnywhere, BlueprintReadWrite ,Category="Weapon Data")
	float Speed=50000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite ,Category="Weapon Data")
	float BulletPower=25;
	UFUNCTION(BlueprintCallable)
	void Shoot(FVector Direction);
	bool bHasBeenShot;
	FVector BulletDirection;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnCollisionEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);

	 

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
