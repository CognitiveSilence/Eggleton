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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Statistics)
		int32 CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Statistics)
		int32 MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Interactions)
		bool IsGrappled;

	UPROPERTY(EditAnywhere, BlueprintRead, Category = PartolPoint)
		Vector3 StartPoint;
	
	UPROPERTY(EditAnywhere, BlueprintRead, Category = PartolPoint)
		Vector3 EndPoint;
};
