// Fill out your copyright notice in the Description page of Project Settings.

#include "EggletonProject.h"
#include "EnemyPawn.h"


AEnemyPawn::AEnemyPawn(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	
}

void AEnemyPawn::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		CurrentHealth = MaxHealth;
	}
}

