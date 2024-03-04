// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameplayEffectExecutionCalculation.h"

#include "GameHealExecution.generated.h"

class UObject;

/**
 * 
 */
UCLASS()
class R_D_CPP_FPS_API UGameHealExecution : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

public:
	
	UGameHealExecution();
	
protected:
	
	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
	
};
