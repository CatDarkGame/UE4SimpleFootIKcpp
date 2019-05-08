// Copyright(c) 2019 CatDark, All Rights Reserved.

#include "SimpleFootIKGameMode.h"
#include "SimpleFootIKCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASimpleFootIKGameMode::ASimpleFootIKGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
