// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Attributes/GameStaminaSet.h"
#include "AbilitySystemBlueprintLibrary.h"

UE_DEFINE_GAMEPLAY_TAG(TAG_GAMEPLAY_FULLSTAMINA, "Gameplay.FullStamina")
UE_DEFINE_GAMEPLAY_TAG(TAG_GAMEPLAY_OUTOFSTAMINA, "Gameplay.OutOfStamina")
UE_DEFINE_GAMEPLAY_TAG(TAG_GAMEPLAY_CANCELSPRINT, "Gameplay.CancelSprint")

UGameStaminaSet::UGameStaminaSet()
{
	
}

void UGameStaminaSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);

	Clamp(Attribute, NewValue);
}

void UGameStaminaSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	//Clamp(Attribute,NewValue);
	if (Attribute == GetStaminaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0, GetMaxStamina());
	}	
}

void UGameStaminaSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if (Attribute == GetStaminaAttribute())
	{
		if ((NewValue >= GetMaxStamina()))
		{
			GetOwningAbilitySystemComponent()->AddLooseGameplayTag(TAG_GAMEPLAY_FULLSTAMINA);
		}
		if (NewValue < GetMaxStamina()) //(OldValue<=0) && (NewValue>0)
		{
			GetOwningAbilitySystemComponent()->RemoveLooseGameplayTag(TAG_GAMEPLAY_FULLSTAMINA);
		}

		
		if (NewValue > 0)
		{
			GetOwningAbilitySystemComponent()->RemoveLooseGameplayTag(TAG_GAMEPLAY_OUTOFSTAMINA);
		}
		if (NewValue <= 0 && !GetOwningAbilitySystemComponent()->HasMatchingGameplayTag(TAG_GAMEPLAY_OUTOFSTAMINA))
		{
			//GetOwningAbilitySystemComponent()->HandleGameplayEvent(FGameplayTag(), FGameplayEventData()); Use ths later, i don`t understand how use this :c
			UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(GetOwningActor(),FGameplayTag(TAG_GAMEPLAY_CANCELSPRINT),FGameplayEventData());
			GetOwningAbilitySystemComponent()->AddLooseGameplayTag(TAG_GAMEPLAY_OUTOFSTAMINA);
		}
	}
	
}

void UGameStaminaSet::Clamp(const FGameplayAttribute& Attribute, float& NewValue) const
{
	if (Attribute == GetStaminaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxStamina());
	}
}
