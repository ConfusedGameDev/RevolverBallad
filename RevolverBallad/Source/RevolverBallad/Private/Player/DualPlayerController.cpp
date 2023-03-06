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
#include "Weapons/Weapon.h"

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
	


	AutoPossessPlayer= EAutoReceiveInput::Player0;
	HairCross= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Haircross Mesh"));
	HairCross->SetupAttachment(GetRootComponent());

	

	//Weapons
	/*MeleeWeapon=  CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Melee Weapon Mesh"));
	MeleeWeapon->SetupAttachment(GetMeleePlayerMesh(),FName("WeaponSocket"));
	RangedWeapon=  CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ranged Weapon Mesh"));
	RangedWeapon->SetupAttachment(GetRangedPlayerMesh(),"ShotgunSocket");

	RangedShield=  CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ranged Shield Mesh"));
	RangedShield->SetupAttachment(GetRangedPlayerMesh(),"ShieldSocket");
	MeleeShield=  CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Melee Shield Mesh"));
	MeleeShield->SetupAttachment(GetMeleePlayerMesh(), "ShieldSocket");*/
	
	//HudOverlay= CreateDefaultSubobject<UHUDOverlay>(TEXT("HUD"));
//	MovementComponent= CreateDefaultSubobject<UCharacterMovementComponent>(TEXT("Movement Component"));
 
}

void ADualPlayerController::InitializeWeapons()
{
	SetupWeapons(DefaultMeleeWeapon,GetMeleePlayerMesh(),CurrentMeleeWeapon);
	SetupWeapons(DefaultMeleeShield,GetMeleePlayerMesh(),CurrentMeleeShield);
	SetupWeapons(DefaultRangedShield,GetRangedPlayerMesh(),CurrentRangedShield);
	SetupWeapons(DefaultRangedWeapon,GetRangedPlayerMesh(),CurrentRangedWeapon);
	UpdateWeapons();
}
void ADualPlayerController::SetupWeapons(TSubclassOf<AWeapon> newWeapon, UPrimitiveComponent* WeaponOwner, AWeapon* &WeaponRef)
{
	if(GetWorld())
	{
		WeaponRef= Cast<AWeapon>(GetWorld()->SpawnActor(*newWeapon));
		if(WeaponRef)
		{			
			FAttachmentTransformRules rules= FAttachmentTransformRules::KeepRelativeTransform;			
			WeaponRef->AttachToComponent(WeaponOwner,rules,FName(WeaponRef->WeaponName.Append("_Socket")));
		}
		
	}
	
}
USkeletalMeshComponent* ADualPlayerController::GetMeleePlayerMesh()
{
	return Player1MSKM;
}

USkeletalMeshComponent* ADualPlayerController::GetRangedPlayerMesh()
{
	return  Player2MSKM;
}

void ADualPlayerController::onLightAttack(const FInputActionValue& Value)
{
	if(CanAttack)
	{
		CanAttack=false;		
		LightAttack();
		 
	}
}
void ADualPlayerController::onLightAttackEnd(const FInputActionValue& Value)
{
	CanAttack=true;
	Attacking=false;
}

void ADualPlayerController::OnMove(const FInputActionValue& Value)
{
	MovementSpeed = FVector(Value.Get<FVector2D>().X,Value.Get<FVector2D>().Y,0);	
	if(HairCross)
	{
		HaircrossPosition= GetActorForwardVector()*MovementSpeed.X*250+ GetActorRightVector()* MovementSpeed.Y*250;
		HaircrossPosition.Z=0;
		HairCross->SetWorldLocation(GetActorLocation()+HaircrossPosition);
	} 	 
 	PlayersHolder->SetWorldRotation(HaircrossPosition.GetSafeNormal().Rotation());	 
	 
	AddActorWorldOffset(PlayersHolder->GetForwardVector()*LocomotionSpeed);
	 
}

void ADualPlayerController::OnMoveStop(const FInputActionValue& Value)
{
	MovementSpeed=FVector::Zero();
}

void ADualPlayerController::OnSwitchCharacter(const FInputActionValue& Value)
{
	SwitchPlayer();
	GEngine->AddOnScreenDebugMessage(-1,1.f,FColor(1,0,0),TEXT("CHANGE!"));
}

void ADualPlayerController::OnJump(const FInputActionValue& Value)
{
	isJumping=true;
	AddActorWorldOffset(PlayersHolder->GetForwardVector()*JumpForce);	
}

void ADualPlayerController::OnJumpEnd(const FInputActionValue& Value)
{
	isJumping=false;
}

// Called when the game starts or when spawned
void ADualPlayerController::BeginPlay()
{
	Super::BeginPlay();
	MovementSpeed=FVector::Zero();
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

	InitializeWeapons();
	
}

void ADualPlayerController::LightAttack()
{
	if(CurrentPlayerState== EPlayerState::EState_Melee)
	{
		Attacking=true;	
	}
	else if(CurrentPlayerState== EPlayerState::EState_Ranged)
	{
		if(CurrentAmmo>0 && HudOverlay)
		{
			CurrentAmmo--;
			HudOverlay->UpdateAmmo(CurrentAmmo);
			if(CurrentRangedWeapon)
				CurrentRangedWeapon->Attack();
		}
	}
}

void ADualPlayerController::GetDamage(float DamageAmount)
{
	if(CurrentPlayerState== EPlayerState::EState_Melee)
	{
		currentHealthMelee-=DamageAmount;
		if(currentHealthMelee<=0)
		{
			CurrentPlayerState= EPlayerState::EState_Dead;
		}
		if(HudOverlay)
		{
			HudOverlay->SetActiveHealthBarPercent(currentHealthMelee/maxHealth);
		}
	}
	else if(CurrentPlayerState== EPlayerState::EState_Ranged)
	{
		currentHealthRanged-=DamageAmount;
		if(currentHealthRanged<=0)
		{
			CurrentPlayerState= EPlayerState::EState_Dead;
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

	if(CurrentPlayerState!= EPlayerState::EState_Melee && CurrentPlayerState!= EPlayerState::EState_Ranged) return;
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
	CurrentPlayerState= CurrentPlayerState== EPlayerState::EState_Melee? EPlayerState::EState_Ranged:EPlayerState::EState_Melee;
	if(HudOverlay)
	{
		if(CurrentPlayerState== EPlayerState::EState_Melee)
		{
			HudOverlay->SwitchCharacters(true, currentHealthMelee, currentHealthRanged);
		}
		else
		{
			HudOverlay->SwitchCharacters(false,  currentHealthRanged,currentHealthMelee);
		}
	}
	
	UpdateWeapons();
	
}

void ADualPlayerController::UpdateWeapons()
{
	if(CurrentMeleeShield &&CurrentMeleeWeapon && CurrentRangedShield&&CurrentRangedWeapon)
	{
		CurrentMeleeShield->ToggleWeapon(CurrentPlayerState== EPlayerState::EState_Ranged);
		CurrentMeleeWeapon->ToggleWeapon(CurrentPlayerState== EPlayerState::EState_Melee);
		CurrentRangedWeapon->ToggleWeapon(CurrentPlayerState== EPlayerState::EState_Ranged);
		CurrentRangedShield->ToggleWeapon(CurrentPlayerState== EPlayerState::EState_Melee);
		HudOverlay->UpdateWeaponType(CurrentPlayerState== EPlayerState::EState_Ranged?CurrentRangedWeapon:CurrentMeleeWeapon);
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
		UEIC->BindAction(MoveInputAction,ETriggerEvent::Completed,this,&ADualPlayerController::OnMoveStop);

		UEIC->BindAction(LightAttackInputAction,ETriggerEvent::Started,this,&ADualPlayerController::onLightAttack);
		UEIC->BindAction(LightAttackInputAction,ETriggerEvent::Completed,this,&ADualPlayerController::onLightAttackEnd);

		UEIC->BindAction(SwitchCharacterInputAction, ETriggerEvent::Started,this, &ADualPlayerController::OnSwitchCharacter);

		UEIC->BindAction(JumpAction, ETriggerEvent::Started,this, &ADualPlayerController::OnJump);
		UEIC->BindAction(JumpAction, ETriggerEvent::Completed,this, &ADualPlayerController::OnJumpEnd);
		 
	}

}

