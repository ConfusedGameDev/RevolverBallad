// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/Weapon.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	WeaponMesh= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon Mesh"));
	WeaponMesh->SetupAttachment(GetRootComponent());
	WeaponShootPoint= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon ShootPoint"));
	WeaponShootPoint->SetupAttachment(WeaponMesh);
	
}

void AWeapon::ToggleWeapon(bool isActive)
{
	if(WeaponMesh)
	{
		WeaponMesh->SetVisibility(isActive);
	}
}

void AWeapon::Attack()
{
	if(WeaponType== EWeaponType::ERanged && WeaponShootPoint && BulletType && GetWorld())
	{
		auto newBullet= Cast<ABullet>(GetWorld()->SpawnActor(*BulletType));
		if(newBullet)
		{
			newBullet->SetLifeSpan(3.5f);
			newBullet->SetActorLocation(WeaponShootPoint->GetComponentLocation());
			newBullet->SetActorRotation(WeaponShootPoint->GetComponentRotation());
			newBullet->Shoot(WeaponShootPoint->GetForwardVector());
		}
	}
}


// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

