// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AchievementProjectHUD.generated.h"

UCLASS()
class AAchievementProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AAchievementProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

