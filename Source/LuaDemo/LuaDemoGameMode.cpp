// Copyright Epic Games, Inc. All Rights Reserved.

#include "LuaDemoGameMode.h"
#include "LuaDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALuaDemoGameMode::ALuaDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
