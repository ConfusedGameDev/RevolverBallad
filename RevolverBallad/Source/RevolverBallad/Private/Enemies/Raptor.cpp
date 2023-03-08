// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemies/Raptor.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Components/CapsuleComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "Player/DualPlayerController.h"

// Sets default values
ARaptor::ARaptor()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessAI= EAutoPossessAI::PlacedInWorldOrSpawned;
	PawnSensingComponent= CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing Component"));
	PawnSensingComponent->SetPeripheralVisionAngle(70.f);
	AttackCollider= CreateDefaultSubobject<UCapsuleComponent>(TEXT("Attack Collider"));
	AttackCollider->SetupAttachment(GetMesh());
	AttackCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	PawnSensingComponent->SightRadius=700;
	PawnSensingComponent->OnSeePawn.AddDynamic(this, &ARaptor::OnSeeTarget);
	CurrentHealth=MaxHealth;

}

void ARaptor::OnSeeTarget(APawn* Target)
{
	 if(auto player= Cast<ADualPlayerController>(Target))
	{
	 	CurrentTarget= player;
		TrySetBlackBoardKey(FName("HasSeenPlayer"),true);
	} 
}

void ARaptor::OnAttackEnd()
{
	bIsAttacking=false;
	AttackCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ARaptor::TrySetBlackBoardKey(FName KeyName, bool Value)
{
	if (auto AIController=  GetController<AAIController>())
	{
		if(auto BB= AIController->GetBlackboardComponent())
		{
			BB->SetValueAsBool(KeyName,Value);
		}
	}
}

void ARaptor::OnAttack()
{
	AttackCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

void ARaptor::DamageComplete()
{
	bGetDamage=false;
	TrySetBlackBoardKey("IsStunned",false);
	isDead= CurrentHealth<0;
	TrySetBlackBoardKey("IsDead",isDead);
}

float ARaptor::GetCurrentHealth_Implementation()
{
	return CurrentHealth;
}

void ARaptor::GetDamage_Implementation(float Amount)
{
	CurrentHealth-=Amount;	
	bGetDamage=true;
	TrySetBlackBoardKey("IsStunned",true);
	
}

float ARaptor::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator,
	AActor* DamageCauser)
{
	Execute_GetDamage(this,DamageAmount);
	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	
}

// Called when the game starts or when spawned
void ARaptor::BeginPlay()
{
	Super::BeginPlay();
	bCanAttack=true;
}

// Called every frame
void ARaptor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(bCanAttack && CurrentTarget)
	{
		auto currentDistance= FVector::Distance(GetActorLocation(),CurrentTarget->GetActorLocation());
		GEngine->AddOnScreenDebugMessage(-1,1.f,FColor(1,0,0),FString::Printf(TEXT("Dist =  %f"),currentDistance));
		if(!bIsAttacking && currentDistance<=AttackMinDistance)
		{
			bIsAttacking=true;
			TrySetBlackBoardKey(FName("HasSeenPlayer"),false);
			TrySetBlackBoardKey(FName("IsInAttackRange"),true);
			bCanAttack=false;
		}
	}
	
}

// Called to bind functionality to input
void ARaptor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

