// Copyright 2018 Pavlov Dmitriy
#include "KeyBindMenu.h"
#include "GameFramework/InputSettings.h"
#include "UObject/UObjectIterator.h"

void FKeyBindMenu::GetAllKeyBindings()
{
	
	const UInputSettings* Settings = GetDefault<UInputSettings>();
	if (!Settings) return;

	const TArray<FInputActionKeyMapping>& Actions = Settings->ActionMappings;

	KeyBinds = Actions;
}


bool FKeyBindMenu::ReBindKeys()
{

	UInputSettings* Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
	if (!Settings) return false;

	TArray<FInputActionKeyMapping>& Actions = Settings->ActionMappings;

	Actions = KeyBinds;
	

	//SAVES TO DISK
	const_cast<UInputSettings*>(Settings)->SaveKeyMappings();


	//REBUILDS INPUT, creates modified config in Saved/Config/Windows/Input.ini
	for (TObjectIterator<UPlayerInput> It; It; ++It)
	{
		It->ForceRebuildingKeyMaps(true);
	}
	return true;
}

bool FKeyBindMenu::SetKey(FKey Key, int32 KeyNum)
{
	for (int i = 0; i < KeyBinds.Num(); i++)
	{
		if (i != KeyNum && KeyBinds[i].Key == Key)
		{
			return false;
		}
	}

	KeyBinds[KeyNum].Key = Key;

	return true;
}

void FKeyBindMenu::SetDefaultKeys()
{
	for (int i = 0; i < KeyBinds.Num(); i++)
	{
		KeyBinds[i].Key = GetDefaultKey(KeyBinds[i].ActionName.ToString());
	}
	
}


FKey FKeyBindMenu::GetDefaultKey(FString Action) const
{
	if (Action == FString("Jump"))
	{
		return EKeys::SpaceBar;
	}
	else if (Action == FString("Crouch"))
	{
		return EKeys::LeftShift;
	}
	else if (Action == FString("QuickTurn"))
	{
		return EKeys::Q;
	}
	else
	{
		throw;
	}
		
}
