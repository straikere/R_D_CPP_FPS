// Copyright Epic Games, Inc. All Rights Reserved.

#include "R_D_CPP_FPSGameMode.h"
#include "R_D_CPP_FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AR_D_CPP_FPSGameMode::AR_D_CPP_FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
