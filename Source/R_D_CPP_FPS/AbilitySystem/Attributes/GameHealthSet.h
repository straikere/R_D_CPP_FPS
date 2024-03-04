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

	// Incoming healing. This is mapped directly to +Health
	UPROPERTY(BlueprintReadOnly,Category="Health")
	FGameplayAttributeData Healing;
	ATTRIBUTE_ACCESSORS(UGameHealthSet, Healing);

	// Incoming damage. This is mapped directly to -Health
	UPROPERTY(BlueprintReadOnly,Category="Health")
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UGameHealthSet, Damage);

protected:

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	void ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const;

private:

	// Used to track when the health reaches 0.
	bool bOutOfHeal;
	
};
