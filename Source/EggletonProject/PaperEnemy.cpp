// Fill out your copyright notice in the Description page of Project Settings.

#include "EggletonProject.h"
#include "PaperEnemy.h"


APaperEnemy::APaperEnemy(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

}

void APaperEnemy::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("BeginPlay Called on APaperEnemy"));
		CurrentHealth = MaxHealth;

	}
}

