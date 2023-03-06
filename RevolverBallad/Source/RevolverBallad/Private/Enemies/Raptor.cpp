// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemies/Raptor.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
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
	PawnSensingComponent->SightRadius=700;
	PawnSensingComponent->OnSeePawn.AddDynamic(this, &ARaptor::OnSeeTarget);	

}

void ARaptor::OnSeeTarget(APawn* Target)
{
	 if(auto player= Cast<ADualPlayerController>(Target))
	{
		if (auto AIController=  GetController<AAIController>())
		{
			if(auto BB= AIController->GetBlackboardComponent())
			{
				BB->SetValueAsBool(FName("HasSeenPlayer"),true);
			}
		}
	} 
}

// Called when the game starts or when spawned
void ARaptor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARaptor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARaptor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

