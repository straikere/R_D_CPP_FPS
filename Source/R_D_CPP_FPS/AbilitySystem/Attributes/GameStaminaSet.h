// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NativeGameplayTags.h"
#include "AbilitySystem/Attributes/GameAttributeSet.h"
#include "GameStaminaSet.generated.h"

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_GAMEPLAY_FULLSTAMINA)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_GAMEPLAY_OUTOFSTAMINA)
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_GAMEPLAY_CANCELSPRINT)
/**
 * 
 */
UCLASS()
class R_D_CPP_FPS_API UGameStaminaSet : public UGameAttributeSet
{
	GENERATED_BODY()

public:

	UGameStaminaSet();

	UPROPERTY(BlueprintReadOnly, Category="Stamina")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UGameStaminaSet, Stamina)
	
	UPROPERTY(BlueprintReadOnly, Category="Stamina")
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UGameStaminaSet, MaxStamina)
	
protected:
	
	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	void Clamp(const FGameplayAttribute& Attribute,float &NewValue) const; 

};
