// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "R_D_CPP_FPS_AttributeSet.generated.h"

/**
 * 
 */
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
		GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
		GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
		GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
		GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
UCLASS()
class R_D_CPP_FPS_API UR_D_CPP_FPS_AttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category="Health")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UR_D_CPP_FPS_AttributeSet, Health)

	UPROPERTY(BlueprintReadOnly, Category = "Use")
	FGameplayAttributeData UseCounter;
	ATTRIBUTE_ACCESSORS(UR_D_CPP_FPS_AttributeSet, UseCounter)

	UPROPERTY(BlueprintReadOnly, Category = "Resource")
	FGameplayAttributeData Resource;
	ATTRIBUTE_ACCESSORS(UR_D_CPP_FPS_AttributeSet, Resource)

	void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
	void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
};
