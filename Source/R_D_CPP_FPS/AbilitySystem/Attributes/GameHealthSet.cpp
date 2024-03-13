// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Attributes/GameHealthSet.h"

UGameHealthSet::UGameHealthSet()
	: Health(100.f)
	, MaxHealth(100.f)
{
}

void UGameHealthSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
}

void UGameHealthSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);
}
