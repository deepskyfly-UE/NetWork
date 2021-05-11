// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetWorkGameMode.h"
#include "NetWorkHUD.h"
#include "NetWorkCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetWorkGameMode::ANetWorkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANetWorkHUD::StaticClass();
}
