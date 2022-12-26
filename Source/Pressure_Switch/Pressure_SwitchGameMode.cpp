// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pressure_SwitchGameMode.h"
#include "Pressure_SwitchCharacter.h"
#include "UObject/ConstructorHelpers.h"

APressure_SwitchGameMode::APressure_SwitchGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
