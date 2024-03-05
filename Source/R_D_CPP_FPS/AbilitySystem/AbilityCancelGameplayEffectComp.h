// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "GameplayTagContainer.h"
#include "AbilityCancelGameplayEffectComp.generated.h"

/**
 * 
 */
UCLASS()
class R_D_CPP_FPS_API UAbilityCancelGameplayEffectComp : public UGameplayEffectComponent
{
	GENERATED_BODY()

public:

	virtual void OnGameplayEffectApplied(FActiveGameplayEffectsContainer& ActiveGEContainer, FGameplayEffectSpec& GESpec, FPredictionKey& PredictionKey) const override;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer AbilityToCancelWithTags;
};
