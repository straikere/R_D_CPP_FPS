// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Attributes/GameAttributeSet.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameAttributeSet)

UGameAttributeSet::UGameAttributeSet()
{
	
}

UAbilitySystemComponent* UGameAttributeSet::GetGameAbilitySystemComponent() const
{
	return Cast<UAbilitySystemComponent>(GetOwningAbilitySystemComponent());
}
