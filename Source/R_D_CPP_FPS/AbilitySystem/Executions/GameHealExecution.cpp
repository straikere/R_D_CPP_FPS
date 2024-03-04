// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHealExecution.h"
//#include ""



UGameHealExecution::UGameHealExecution()
{

	
}

void UGameHealExecution::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
                                                FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	Super::Execute_Implementation(ExecutionParams, OutExecutionOutput);

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluateParameters;
	EvaluateParameters.SourceTags = SourceTags;
	EvaluateParameters.TargetTags = TargetTags;

	float Damage = 0.f;
	//ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageCapture, EvaluateParameters, Damage);

	// if (TargetTags->HasTag(TAG_Character_Player_HasImmunity))
	// {
	// 	Damage = 0.f;
	// }

	if (Damage>0)
	{
		//OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(UR_D_CPP_FPS_AttributeSet::GetHealthAttribute(),EGameplayModOp::Additive, -Damage));

		//OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(UR_D_CPP_FPS_AttributeSet::GetDa));
		OutExecutionOutput.MarkConditionalGameplayEffectsToTrigger();
	}
	
	
}
