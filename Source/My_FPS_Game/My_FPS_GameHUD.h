// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "My_FPS_GameHUD.generated.h"

UCLASS()
class AMy_FPS_GameHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMy_FPS_GameHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

