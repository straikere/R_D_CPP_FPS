// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Attributes/GameAttributeSet.h"
#include "GameResistanceSet.generated.h"

/**
 * 
 */
UCLASS()
class R_D_CPP_FPS_API UGameResistanceSet : public UGameAttributeSet
{
	GENERATED_BODY()

public:
	
	/*--------Resistance--------*/
	UPROPERTY(BlueprintReadOnly, Category="Resistance")
	FGameplayAttributeData Radio_Protection;
	ATTRIBUTE_ACCESSORS(UGameResistanceSet, Radio_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Resistance")
	FGameplayAttributeData Chemical_Protection;
	ATTRIBUTE_ACCESSORS(UGameResistanceSet, Chemical_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Resistance")
	FGameplayAttributeData Electrical_Protection;
	ATTRIBUTE_ACCESSORS(UGameResistanceSet, Electrical_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Resistance")
	FGameplayAttributeData Thermal_Protection;
	ATTRIBUTE_ACCESSORS(UGameResistanceSet, Thermal_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Resistance")
	FGameplayAttributeData Psi_Protection;
	ATTRIBUTE_ACCESSORS(UGameResistanceSet, Psi_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Resistance")
	FGameplayAttributeData Hit_Protection;
	ATTRIBUTE_ACCESSORS(UGameResistanceSet, Hit_Protection)

	UPROPERTY(BlueprintReadOnly, Category="Resistance")
	FGameplayAttributeData Armor_Protection;
	ATTRIBUTE_ACCESSORS(UGameResistanceSet, Armor_Protection)
	
};
