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
	
	UPROPERTY(BlueprintReadOnly, Category="Health")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UGameHealthSet, Health)
	
};
