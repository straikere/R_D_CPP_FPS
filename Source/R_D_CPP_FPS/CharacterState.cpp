// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterState.h"

ACharacterState::ACharacterState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}
