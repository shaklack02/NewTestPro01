// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "NewTestPro01GameMode.h"
#include "NewTestPro01Character.h"
#include "UObject/ConstructorHelpers.h"

ANewTestPro01GameMode::ANewTestPro01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
