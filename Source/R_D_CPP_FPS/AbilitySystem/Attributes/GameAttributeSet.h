// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"

#include "GameAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**	UGameAttributeSet
 *
 *	Base attribute set class for the project.
 */

UCLASS()
class UGameAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UGameAttributeSet();

	UAbilitySystemComponent* GetGameAbilitySystemComponent() const;
};
