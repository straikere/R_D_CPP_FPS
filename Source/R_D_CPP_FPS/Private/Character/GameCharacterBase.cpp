// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/GameCharacterBase.h"

AGameCharacterBase::AGameCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
}

UAbilitySystemComponent* AGameCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AGameCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called to bind functionality to input
// void AGameCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
// {
// 	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
// }

