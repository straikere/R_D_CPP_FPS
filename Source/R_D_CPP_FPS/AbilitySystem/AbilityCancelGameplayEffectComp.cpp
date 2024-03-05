// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityCancelGameplayEffectComp.h"

#include "AbilitySystemComponent.h"
#include "GameplayEffect.h"

void UAbilityCancelGameplayEffectComp::OnGameplayEffectApplied(FActiveGameplayEffectsContainer& ActiveGEContainer,
                                                               FGameplayEffectSpec& GESpec, FPredictionKey& PredictionKey) const
{
	Super::OnGameplayEffectApplied(ActiveGEContainer, GESpec, PredictionKey);

	if (ActiveGEContainer.Owner)
	{
		UAbilitySystemComponent* ASC = ActiveGEContainer.Owner;
		ASC->CancelAbilities(&AbilityToCancelWithTags);
	}
}
