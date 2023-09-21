// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetworkFPSGameMode.h"
#include "NetworkFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetworkFPSGameMode::ANetworkFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
