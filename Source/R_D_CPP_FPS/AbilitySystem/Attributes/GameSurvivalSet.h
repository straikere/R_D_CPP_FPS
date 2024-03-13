// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Attributes/GameAttributeSet.h"
#include "GameSurvivalSet.generated.h"

/**
 * 
 */
UCLASS()
class R_D_CPP_FPS_API UGameSurvivalSet : public UGameAttributeSet
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, Category="Survival")
	FGameplayAttributeData Starvation;
	ATTRIBUTE_ACCESSORS(UGameSurvivalSet, Starvation)

	UPROPERTY(BlueprintReadOnly, Category="Surveval")
	FGameplayAttributeData Thirst;
	ATTRIBUTE_ACCESSORS(UGameSurvivalSet, Thirst)

protected:

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
	
};
