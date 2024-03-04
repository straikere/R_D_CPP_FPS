// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AbilitySystemComponent.h"
#include "AbilitySystem/Attributes/GameAttributeSet.h"
//#include "NativeGameplayTags.h"

#include "GameHealthSet.generated.h"

class UObject;
/**
 * 
 */
UCLASS(BlueprintType)
class UGameHealthSet : public UGameAttributeSet
{
	GENERATED_BODY()


public:

	UGameHealthSet();

	ATTRIBUTE_ACCESSORS(UGameHealthSet, Health);

protected:
	
private:
	
	UPROPERTY(BlueprintReadOnly, Category= "Game|Health", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData Health;
};
