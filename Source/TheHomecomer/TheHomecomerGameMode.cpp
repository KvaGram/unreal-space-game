// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TheHomecomerGameMode.h"
#include "TheHomecomerPlayerController.h"
#include "TheHomecomerPawn.h"

ATheHomecomerGameMode::ATheHomecomerGameMode()
{
	// no pawn by default
	DefaultPawnClass = ATheHomecomerPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ATheHomecomerPlayerController::StaticClass();
}
