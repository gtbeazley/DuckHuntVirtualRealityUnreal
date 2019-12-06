// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DuckHuntVRGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DUCKHUNTVR_API ADuckHuntVRGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		ADuckHuntVRGameModeBase();

public:
	UFUNCTION(BlueprintCallable)
		virtual void BeginPlay() override;

	/* handles the next map*/
	void OpenNextMap(FName a_name);
};
