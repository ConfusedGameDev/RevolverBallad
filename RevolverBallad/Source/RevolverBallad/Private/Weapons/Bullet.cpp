// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/Bullet.h"

#include "Components/SphereComponent.h"
#include "Interfaces/Damageable.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BulletMesh= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon Mesh"));
	BulletMesh->SetupAttachment(GetRootComponent());
	BulletCollider= CreateDefaultSubobject<USphereComponent>(TEXT("WeaponCollider"));
	BulletCollider->SetupAttachment(BulletMesh);
	

}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	BulletMesh->SetSimulatePhysics(true);
	BulletMesh->SetCollisionResponseToChannel(ECC_Visibility,ECollisionResponse::ECR_Overlap);
	BulletCollider->OnComponentBeginOverlap.AddDynamic(this,&ABullet::OnCollisionEnter);
	
	
}

void ABullet::Shoot(FVector Direction)
{
	this->BulletDirection=Direction;
	bHasBeenShot=true;
}

 

void ABullet::OnCollisionEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{
	GEngine->AddOnScreenDebugMessage(-1,1.0f,FColor(1,0,0), FString::Printf(TEXT("Bullet Collided with %s"),*OtherComponent->GetName()));
	//TODO add Damage Logic
	if(OtherActor->Implements<UDamageable>())
	{
		FDamageEvent DamageEvent;
		UGameplayStatics::ApplyDamage(OtherActor,BulletPower,GetInstigatorController(),this, UDamageType::StaticClass());

		Destroy();
	}
	
	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(bHasBeenShot)
	BulletMesh->AddForce(BulletDirection*Speed,NAME_None,true);
}

