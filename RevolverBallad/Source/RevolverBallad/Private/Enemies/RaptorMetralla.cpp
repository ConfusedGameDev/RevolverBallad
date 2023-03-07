// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemies/RaptorMetralla.h"

ARaptorMetralla::ARaptorMetralla():ARaptor()
{
	 Backpack= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackPack Mesh"));

	 Backpack->SetupAttachment(GetMesh(),"BackPackSocket");
	
}

void ARaptorMetralla::OnAttack()
{
	
}

void ARaptorMetralla::OnAttackEnd()
{
	bIsAttacking=false; 
}

void ARaptorMetralla::Shoot()
{
	
}

