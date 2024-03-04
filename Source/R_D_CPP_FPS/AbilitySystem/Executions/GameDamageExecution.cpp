// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Executions/GameDamageExecution.h"

//#include "R_D_CPP_FPS_AttributeSet.h"

UE_DEFINE_GAMEPLAY_TAG(TAG_Character_Player_HasImmunity, "Character.Player.HasImmunity");

UGameDamageExecution::UGameDamageExecution()
{
	//DamageCapture = FGameplayEffectAttributeCaptureDefinition(UR_D_CPP_FPS_AttributeSet::GetDamageAttribute(),
	//	EGameplayEffectAttributeCaptureSource::Source, true);
	RelevantAttributesToCapture.Add(DamageCapture);	
}

void UGameDamageExecution::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams,
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
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageCapture, EvaluateParameters, Damage);
	
	if (TargetTags->HasTag(TAG_Character_Player_HasImmunity))
	{
		Damage = 0.f;
	}
	if (Damage > 0)
	{
		//OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(UR_D_CPP_FPS_AttributeSet::GetHealthAttribute(), EGameplayModOp::Additive, -Damage));

		OutExecutionOutput.MarkConditionalGameplayEffectsToTrigger();
	}
	
}
