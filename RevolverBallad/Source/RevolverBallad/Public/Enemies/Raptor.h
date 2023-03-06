// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Raptor.generated.h"

UCLASS()
class REVOLVERBALLAD_API ARaptor : public ACharacter
{
	GENERATED_BODY()

	class UPawnSensingComponent* PawnSensingComponent;
public:
	// Sets default values for this character's properties
	ARaptor();

	UFUNCTION()
	void OnSeeTarget( APawn* Target);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
