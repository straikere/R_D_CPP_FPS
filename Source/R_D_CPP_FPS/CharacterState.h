// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/PlayerState.h"
#include "CharacterState.generated.h"

/**
 * 
 */
UCLASS()
class R_D_CPP_FPS_API ACharacterState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	ACharacterState();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override{ return AbilitySystemComponent;}
	
	UPROPERTY(BlueprintReadWrite)
	UAbilitySystemComponent* AbilitySystemComponent;
};
