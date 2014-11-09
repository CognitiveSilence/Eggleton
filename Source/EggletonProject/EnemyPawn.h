// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "EnemyPawn.generated.h"

/**
 * 
 */
UCLASS()
class EGGLETONPROJECT_API AEnemyPawn : public APawn
{
	GENERATED_UCLASS_BODY()

		virtual void BeginPlay() override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Statistics)
		int32 CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Statistics)
		int32 MaxHealth;
};
