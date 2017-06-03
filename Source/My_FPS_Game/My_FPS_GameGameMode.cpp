// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "My_FPS_Game.h"
#include "My_FPS_GameGameMode.h"
#include "My_FPS_GameHUD.h"
#include "My_FPS_GameCharacter.h"

AMy_FPS_GameGameMode::AMy_FPS_GameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMy_FPS_GameHUD::StaticClass();
}
