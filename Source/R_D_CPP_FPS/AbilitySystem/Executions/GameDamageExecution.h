// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "NativeGameplayTags.h"
#include "GameDamageExecution.generated.h"

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Character_Player_HasImmunity)

/**
 * 
 */
UCLASS()
class R_D_CPP_FPS_API UGameDamageExecution : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

public:
	UGameDamageExecution();
	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;

private:

	FGameplayEffectAttributeCaptureDefinition DamageCapture;
	
};
