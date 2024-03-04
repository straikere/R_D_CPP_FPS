// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Attributes/GameAttributeSet.h"
#include "GameCharacteristicsSet.generated.h"

/**
 * 
 */
UCLASS()
class R_D_CPP_FPS_API UGameCharacteristicsSet : public UGameAttributeSet
{
	GENERATED_BODY()

public:

	/*--------Characteristics--------*/
	UPROPERTY(BlueprintReadOnly, Category="Characteristics")
	FGameplayAttributeData Strength_Recovery;
	ATTRIBUTE_ACCESSORS(UGameCharacteristicsSet, Strength_Recovery)
	
};
