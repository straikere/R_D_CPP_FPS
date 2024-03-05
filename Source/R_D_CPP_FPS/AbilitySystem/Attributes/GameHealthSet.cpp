// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Attributes/GameHealthSet.h"

UGameHealthSet::UGameHealthSet()
	: Health(100.0f)
	, MaxHealth(100.0f)
{
	bOutOfHeal = false;
}


void UGameHealthSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	ClampAttribute(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		
		// if (GetHealth() < GetMaxHealth())
		// {
		// 	GetOwningAbilitySystemComponent()->RemoveLooseGameplayTag(FGameplayTag::RequestGameplayTag("Gameplay.FullHealth"));
		// }
		// if (GetHealth() >= GetMaxHealth())
		// {
		// 	GetOwningAbilitySystemComponent()->AddLooseGameplayTag(FGameplayTag::RequestGameplayTag("Gameplay.FullHealth"));
		// }
	}
}

void UGameHealthSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);


	
	// if (Attribute == GetMaxHealthAttribute())
	// {
	// 	// Make sure current health is not greater than the new max health.
	// 	if (GetHealth() > NewValue)
	// 	{
	// 		//UAbilitySystemComponent* GameASC = GetAbi
	// 	}
	// }

	//UAbilitySystemComponent* ASC = GetOwningAbilitySystemComponent();

	//ASC->Add
	
	

	if (bOutOfHeal && (GetHealth() > 0.0f))
	{
		bOutOfHeal = false;
	}
}

void UGameHealthSet::ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const
{
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue,0.0f, GetMaxHealth());	
	}
	else if (Attribute == GetMaxHealthAttribute())
	{
		// Do not allow max health to drop below 1.
		NewValue = FMath::Max(NewValue,1.0f);
	}
}
