// Copyright 2018 Pavlov Dmitriy
#pragma once

#include "CoreMinimal.h"
#include "Classes/GameFramework/PlayerInput.h"
#include "KeyBindMenu.generated.h"


USTRUCT()
struct FKeyBindMenu
{
	GENERATED_BODY()
public:
	FKeyBindMenu() { GetAllKeyBindings(); }

	bool SetKey(FKey Key, int32 KeyNum);

	void GetAllKeyBindings();

	bool ReBindKeys();

	void SetDefaultKeys();

public:

	TArray<FInputActionKeyMapping> KeyBinds;

private:

	FKey GetDefaultKey(FString Action) const;

};