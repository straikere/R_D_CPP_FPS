// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "CharacterAttributeSet.generated.h"

/**
 * 
 */
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
		GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
		GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
		GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
		GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class R_D_CPP_FPS_API UCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	/*--------Basics--------*/
	UPROPERTY(BlueprintReadOnly, Category="Basics")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Health)

	UPROPERTY(BlueprintReadOnly, Category="Basics")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Stamina)

	UPROPERTY(BlueprintReadOnly, Category="Basics")
	FGameplayAttributeData Carrying_Capacity;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Carrying_Capacity)

	UPROPERTY(BlueprintReadOnly, Category="Basics")
	FGameplayAttributeData Radiation_Level;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Radiation_Level)

	UPROPERTY(BlueprintReadOnly, Category="Basics")
	FGameplayAttributeData Starvation;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Starvation)
	
	UPROPERTY(BlueprintReadOnly, Category="Basics")
	FGameplayAttributeData Thirst;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Thirst)
	
	UPROPERTY(BlueprintReadOnly, Category="Basics")
	FGameplayAttributeData Cheeriness;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Cheeriness)

	/*--------Stats--------*/
	UPROPERTY(BlueprintReadOnly, Category="Stats")
	FGameplayAttributeData Radio_Protection;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Radio_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Stats")
	FGameplayAttributeData Chemical_Protection;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Chemical_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Stats")
	FGameplayAttributeData Electrical_Protection;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Electrical_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Stats")
	FGameplayAttributeData Thermal_Protection;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Thermal_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Stats")
	FGameplayAttributeData Psi_Protection;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Psi_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Stats")
	FGameplayAttributeData Hit_Protection;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Hit_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Stats")
	FGameplayAttributeData Armor_Protection;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Armor_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Stats")
	FGameplayAttributeData Strength_Recovery;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Strength_Recovery)

	/*--------Economy--------*/
	UPROPERTY(BlueprintReadOnly,Category="Economy")
	FGameplayAttributeData Money;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Money)
	
};
