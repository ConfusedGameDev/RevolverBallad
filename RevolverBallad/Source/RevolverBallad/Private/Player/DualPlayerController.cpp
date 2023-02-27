// Fill out your copyright notice in the Description page of Project Settings.


#include "RevolverBallad/Public/Player/DualPlayerController.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ADualPlayerController::ADualPlayerController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CapsuleComponent= CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Component"));
	SetRootComponent(CapsuleComponent);
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Component"));
	SpringArmComponent->SetupAttachment(GetRootComponent());
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera  Component"));
	CameraComponent->SetupAttachment(SpringArmComponent);
	Player1MSKM= CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Melee Player Mesh"));
	GetMeleePlayerMesh()->SetupAttachment(GetRootComponent());
	
	Player2MSKM = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Ranged Player Mesh"));
	Player2MSKM->SetupAttachment(CapsuleComponent);
	MeleeWeapon=  CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Melee Weapon Mesh"));
	MeleeWeapon->SetupAttachment(GetMeleePlayerMesh());

	RangedWeapon=  CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ranged Weapon Mesh"));
	RangedWeapon->SetupAttachment(GetRangedPlayerMesh());
	
 
}

USkeletalMeshComponent* ADualPlayerController::GetMeleePlayerMesh()
{
	return Player1MSKM;
}

USkeletalMeshComponent* ADualPlayerController::GetRangedPlayerMesh()
{
	return  Player2MSKM;
}

// Called when the game starts or when spawned
void ADualPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADualPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADualPlayerController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

