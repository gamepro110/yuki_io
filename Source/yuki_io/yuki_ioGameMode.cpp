// Copyright Epic Games, Inc. All Rights Reserved.

#include "yuki_ioGameMode.h"
#include "yuki_ioCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ayuki_ioGameMode::Ayuki_ioGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
