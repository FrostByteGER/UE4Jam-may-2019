// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UE4JamGameGameMode.h"
#include "UE4JamGamePlayerController.h"
#include "UE4JamGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4JamGameGameMode::AUE4JamGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUE4JamGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}