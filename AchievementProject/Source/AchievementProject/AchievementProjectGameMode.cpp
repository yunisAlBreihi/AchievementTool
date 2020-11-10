// Copyright Epic Games, Inc. All Rights Reserved.

#include "AchievementProjectGameMode.h"
#include "AchievementProjectHUD.h"
#include "AchievementProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAchievementProjectGameMode::AAchievementProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAchievementProjectHUD::StaticClass();
}
