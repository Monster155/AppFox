// Copyright Epic Games, Inc. All Rights Reserved.

#include "AppFoxGameMode.h"
#include "AppFoxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAppFoxGameMode::AAppFoxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
