// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PaperCharacter.h"
#include "PaperEnemy.generated.h"

/**
 * 
 */
UCLASS()
class EGGLETONPROJECT_API APaperEnemy : public APaperCharacter
{
	GENERATED_UCLASS_BODY()
	
	virtual void BeginPlay() override;

protected:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = Statistics)
		int32 CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Statistics)
		int32 MaxHealth;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = Interactions)
		bool IsGrappled;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Patrol)
		AActor* StartPoint;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Patrol)
		AActor* EndPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Patrol)
		float PatrolDist;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Patrol)
		float PatrolRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Interactions)
		FVector PlayerLocationPreLerp;
};
