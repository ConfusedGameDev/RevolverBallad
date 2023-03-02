// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/DualPlayerController.h"
#include  "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "RevolverBallad/HUD/HUDOverlay.h"

// Sets default values
ADualPlayerController::ADualPlayerController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CapsuleComponent= CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Component"));
	SetRootComponent(CapsuleComponent);
	PlayersHolder= CreateDefaultSubobject<USceneComponent>(TEXT("Players Holder"));
	PlayersHolder->SetupAttachment(CapsuleComponent);
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Component"));
	SpringArmComponent->SetupAttachment(GetRootComponent());
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera  Component"));
	CameraComponent->SetupAttachment(SpringArmComponent);
	Player1MSKM= CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Melee Player Mesh"));
	GetMeleePlayerMesh()->SetupAttachment(PlayersHolder);
	
	Player2MSKM = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Ranged Player Mesh"));
	Player2MSKM->SetupAttachment(PlayersHolder);
	MeleeWeapon=  CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Melee Weapon Mesh"));
	MeleeWeapon->SetupAttachment(GetMeleePlayerMesh());

	RangedWeapon=  CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ranged Weapon Mesh"));
	RangedWeapon->SetupAttachment(GetRangedPlayerMesh());
	AutoPossessPlayer= EAutoReceiveInput::Player0;
	HairCross= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Haircross Mesh"));
	HairCross->SetupAttachment(GetRootComponent());
	
	//HudOverlay= CreateDefaultSubobject<UHUDOverlay>(TEXT("HUD"));
//	MovementComponent= CreateDefaultSubobject<UCharacterMovementComponent>(TEXT("Movement Component"));
 
}

USkeletalMeshComponent* ADualPlayerController::GetMeleePlayerMesh()
{
	return Player1MSKM;
}

USkeletalMeshComponent* ADualPlayerController::GetRangedPlayerMesh()
{
	return  Player2MSKM;
}

void ADualPlayerController::OnShoot(const FInputActionValue& Value)
{
	Shoot();
	GetDamage(5.f);
}

void ADualPlayerController::OnMove(const FInputActionValue& Value)
{
	FVector2D Direction = Value.Get<FVector2D>();	
	if(HairCross)
	{
		HaircrossPosition= GetActorForwardVector()*Direction.X*250+ GetActorRightVector()* Direction.Y*250;
		HaircrossPosition.Z=0;
		HairCross->SetWorldLocation(GetActorLocation()+HaircrossPosition);
	} 	 
 	PlayersHolder->SetWorldRotation(HaircrossPosition.GetSafeNormal().Rotation());	 
	//GEngine->AddOnScreenDebugMessage(-1,1.f,FColor(0,1,0),FString::Printf(TEXT("direction x: %f Y:%f"),MovementDirection.X,MovementDirection.Y)); 
	AddActorWorldOffset(PlayersHolder->GetForwardVector());
	 
}

void ADualPlayerController::OnSwitchCharacter(const FInputActionValue& Value)
{
	SwitchPlayer();
	GEngine->AddOnScreenDebugMessage(-1,1.f,FColor(1,0,0),TEXT("CHANGE!"));
}

// Called when the game starts or when spawned
void ADualPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if(APlayerController* Player= Cast<APlayerController>(Controller))
	{		
		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(Player->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(InGamePlayerInputContext,0);
			
		}
		 
	}
	currentHealthMelee= maxHealth;
	currentHealthRanged=maxHealth;
	CurrentAmmo=99;
	if(HudOverlay)
	{
		HudOverlay->UpdateAmmo(CurrentAmmo);
		HudOverlay->SetActiveHealthBarPercent(currentHealthMelee);
		HudOverlay->SetPassiveHealthBarPercent(currentHealthRanged);
	}
}

void ADualPlayerController::Shoot()
{
	if(CurrentAmmo>0 && HudOverlay)
	{
		CurrentAmmo--;
		HudOverlay->UpdateAmmo(CurrentAmmo);
	}
}

void ADualPlayerController::GetDamage(float DamageAmount)
{
	if(PlayerState== EPlayerState::EState_Melee)
	{
		currentHealthMelee-=DamageAmount;
		if(currentHealthMelee<=0)
		{
			PlayerState= EPlayerState::EState_Dead;
		}
		if(HudOverlay)
		{
			HudOverlay->SetActiveHealthBarPercent(currentHealthMelee/maxHealth);
		}
	}
	else if(PlayerState== EPlayerState::EState_Ranged)
	{
		currentHealthRanged-=DamageAmount;
		if(currentHealthRanged<=0)
		{
			PlayerState= EPlayerState::EState_Dead;
		}
		if(HudOverlay)
		{
			HudOverlay->SetActiveHealthBarPercent(currentHealthRanged/maxHealth);
		}
	}
	
}

void ADualPlayerController::SwitchPlayer()
{
	GEngine->AddOnScreenDebugMessage(-1,1.f,FColor(1,0,0),TEXT("CHANGE start!"));

	if(PlayerState!= EPlayerState::EState_Melee && PlayerState!= EPlayerState::EState_Ranged) return;
	GEngine->AddOnScreenDebugMessage(-1,1.f,FColor(1,0,0),TEXT("its melee or ranged!"));

	if(PlayersHolder)
	{
		auto PassivePlayerLocation = GetRangedPlayerMesh()->GetComponentLocation();
		auto PassivePlayerRotation = GetRangedPlayerMesh()->GetComponentRotation();
		GetRangedPlayerMesh()->SetWorldLocation(GetMeleePlayerMesh()->GetComponentLocation());
		GetRangedPlayerMesh()->SetWorldRotation(GetMeleePlayerMesh()->GetComponentRotation());
		GetMeleePlayerMesh()->SetWorldLocation(PassivePlayerLocation);
		GetMeleePlayerMesh()->SetWorldRotation(PassivePlayerRotation);
		//PlayersHolder->AddRelativeRotation(FRotator(0,180,0));
		GEngine->AddOnScreenDebugMessage(-1,1.f,FColor(1,0,0),TEXT("Rotated"));

	}
	PlayerState= PlayerState== EPlayerState::EState_Melee? EPlayerState::EState_Ranged:EPlayerState::EState_Melee;
	if(HudOverlay)
	{
		if(PlayerState== EPlayerState::EState_Melee)
		{
			HudOverlay->SwitchCharacters(true, currentHealthMelee, currentHealthRanged);
		}
		else
		{
			HudOverlay->SwitchCharacters(false,  currentHealthRanged,currentHealthMelee);
		}
	}
	
	
	
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
	
	if(UEnhancedInputComponent* UEIC= CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		UEIC->BindAction(MoveInputAction,ETriggerEvent::Triggered,this,&ADualPlayerController::OnMove);
		UEIC->BindAction(ShootInputAction,ETriggerEvent::Started,this,&ADualPlayerController::OnShoot);
		UEIC->BindAction(SwitchCharacterInputAction, ETriggerEvent::Started,this, &ADualPlayerController::OnSwitchCharacter);
		 
	}

}

