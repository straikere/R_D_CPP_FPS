// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Attributes/GameAttributeSet.h"
#include "GameResourcesSet.generated.h"

/**
 * 
 */
UCLASS()
class R_D_CPP_FPS_API UGameResourcesSet : public UGameAttributeSet
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, Category="Resources")
	FGameplayAttributeData Wood;
	ATTRIBUTE_ACCESSORS(UGameResourcesSet,Wood)
	
	UPROPERTY(BlueprintReadOnly, Category="Resources")
	FGameplayAttributeData Stone;
	ATTRIBUTE_ACCESSORS(UGameResourcesSet, Stone)
	
	UPROPERTY(BlueprintReadOnly, Category="Resources")
	FGameplayAttributeData Iron_Ore;
	ATTRIBUTE_ACCESSORS(UGameResourcesSet, Iron_Ore)
	
	UPROPERTY(BlueprintReadOnly, Category="Resources")
	FGameplayAttributeData Iron;
	ATTRIBUTE_ACCESSORS(UGameResourcesSet, Iron)
	
};
