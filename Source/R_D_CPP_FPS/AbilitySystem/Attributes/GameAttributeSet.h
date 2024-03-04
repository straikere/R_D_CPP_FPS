// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AttributeSet.h"

#include "GameAttributeSet.generated.h"

class UAbilitySystemComponent;

/**
 * This macro defines a set of helper functions for accessing and initializing attributes.
 *
 * The following example of the macro:
 *		ATTRIBUTE_ACCESSORS(UGameHealthSet, Health)
 * Will create the following functions:
 *		static FGameplayAttribute GetHealthAttribute();
 *		float GetHealth() const;
 *		void SetHealth(float NewVal);
 *		void InitHealth(float NewVal);
 */
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 *	UGameAttributeSet
 *
 *	Base attribute set class for the project.
 */
UCLASS()
class R_D_CPP_FPS_API UGameAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	UGameAttributeSet();

	UAbilitySystemComponent* GetGameAbilitySystemComponent() const;
	
};
