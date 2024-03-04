// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Attributes/GameAttributeSet.h"
#include "GameEconomySet.generated.h"

/**
 * 
 */
UCLASS()
class R_D_CPP_FPS_API UGameEconomySet : public UGameAttributeSet
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, Category="Economy")
	FGameplayAttributeData Money;
	ATTRIBUTE_ACCESSORS(UGameEconomySet, Money)
	
};
