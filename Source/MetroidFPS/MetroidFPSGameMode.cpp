// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MetroidFPSGameMode.h"
#include "MetroidFPSHUD.h"
#include "MetroidFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMetroidFPSGameMode::AMetroidFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMetroidFPSHUD::StaticClass();
}
