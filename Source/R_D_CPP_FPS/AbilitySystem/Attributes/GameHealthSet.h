// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Attributes/GameAttributeSet.h"
#include "GameHealthSet.generated.h"

/**
 * 
 */
UCLASS()
class R_D_CPP_FPS_API UGameHealthSet : public UGameAttributeSet
{
	GENERATED_BODY()

public:

	UGameHealthSet();
	
	UPROPERTY(BlueprintReadOnly, Category="Health")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UGameHealthSet, Health);

	UPROPERTY(BlueprintReadOnly, Category="Health")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UGameHealthSet, MaxHealth);

protected:
	
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
	
};
