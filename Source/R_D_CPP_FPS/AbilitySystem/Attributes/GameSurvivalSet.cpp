// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Attributes/GameSurvivalSet.h"

void UGameSurvivalSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
}

void UGameSurvivalSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);
}
