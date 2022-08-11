// Copyright Epic Games, Inc. All Rights Reserved.

#include "SICIRTGameMode.h"
#include "SICIRTCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASICIRTGameMode::ASICIRTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
