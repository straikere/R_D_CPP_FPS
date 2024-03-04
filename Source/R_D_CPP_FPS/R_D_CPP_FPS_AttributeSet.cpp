// Fill out your copyright notice in the Description page of Project Settings.


#include "R_D_CPP_FPS_AttributeSet.h"
#include "AbilitySystemBlueprintLibrary.h"


void UR_D_CPP_FPS_AttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		if (NewValue <= 0)
		{
			//UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(GetOwningActor(),FGameplayTag(),FGameplayEventData());
		}
	}
	
}

void UR_D_CPP_FPS_AttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	
	
}
