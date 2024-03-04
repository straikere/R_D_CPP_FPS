// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AbilitySystemComponent.h"
#include "AbilitySystem/Attributes/GameAttributeSet.h"
#include "GameCombatSet.generated.h"

/**
 * 
 */
UCLASS()
class  UGameCombatSet : public UGameAttributeSet
{
	GENERATED_BODY()

public:
	UGameCombatSet();
	ATTRIBUTE_ACCESSORS(UGameCombatSet, BaseDamage)

private:
	
	// The base amount of damage to apply in the damage execution.
	UPROPERTY(BlueprintReadOnly, Category = "Lyra|Combat", meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BaseDamage;

	// The base amount of healing to apply in the heal execution.
	UPROPERTY(BlueprintReadOnly, Category = "Lyra|Combat", meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BaseHeal;
};
