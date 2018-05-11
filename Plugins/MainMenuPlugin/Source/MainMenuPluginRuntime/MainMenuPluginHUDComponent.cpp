// Copyright 2018 Pavlov Dmitriy

#include "MainMenuPluginHUDComponent.h"
#include "Misc/Paths.h"
#include "HAL/FileManagerGeneric.h"
#include "SaveObjectsMenu.h"
#include "GameSettings.h"
#include "GameFramework/InputSettings.h"
#include "Classes/Sound/SoundClass.h"
#include "Classes/Kismet/GameplayStatics.h"
#include "Engine/GameViewportClient.h"
#include "Engine/World.h"
#include "MainMenuPluginButtons.h"
#include "MainMenuGameInstance.h"


void UMainMenuPluginHUDComponent::InitializeComponent()
{
	Super::InitializeComponent();


	if (!Cast<AHUD>(GetOwner()))
	{
		UE_LOG(LogTemp, Fatal, TEXT("UMainMenuPluginHUDComponent can use only for HUD actor"));
	}

	if (!CheckWidgets())
	{
		UE_LOG(LogTemp, Error, TEXT("Not all Widgets in MainMenuComponent set"));
	}

	GameSettings.HUDComponent = this;
	GameSettings.SetSetting();

	EliminatePauseText();
	
	std::shared_ptr<FMenuPluginFactoryButton> ButtonFactory = GetMenuButtonsFactory();

	for (int i = 0; i < (int)EMainMenuPluginButtonType::end; i++)
	{
		Buttons.push_back(ButtonFactory->ButtonCreate((EMainMenuPluginButtonType)i, this));
	}

	std::shared_ptr<FMainMenuModeFactory> ModeFactory = GetMenuModeFactory();

	for (int i = 0; i < (int)EMainMenuMode::end; i++)
	{
		MenuModes.push_back(ModeFactory->Create((EMainMenuMode)i, this));
	}

	for (int i = 0; i < (int)EMenuSettingsIntPropertyType::end; i++)
	{
		IntPropertys.push_back(std::shared_ptr<FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>>
			(EMenuSettingsIntPropertyTypeCreateInt((EMenuSettingsIntPropertyType)i, this)));
	}

	for (int i = 0; i < (int)EMenuSettingsBoolPropertyType::end; i++)
	{
		BoolPropertys.push_back(std::shared_ptr<FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>>
			(EMenuSettingsIntPropertyTypeCreateBool((EMenuSettingsBoolPropertyType)i, this)));
	}

	for (int i = 0; i < (int)EMenuSettingsFloatPropertyType::end; i++)
	{
		FloatPropertys.push_back(std::shared_ptr<FMenuSettingsPropertyBase<float, EMenuSettingsFloatPropertyType>>
			(EMenuSettingsIntPropertyTypeCreateFloat((EMenuSettingsFloatPropertyType)i, this)));
	}

}

bool UMainMenuPluginHUDComponent::CheckWidgets()
{
	if (!GameScreenWidget) return false;

	if (!MainMenuWidget) return false;

	if (!GameMenuWidget) return false;

	if (!SettingsMenuWidget) return false;

	if (!KeyBindMenuWidget) return false;

	if (!TitlesMenuWidget) return false;

	if (!ControlWidget) return false;

	return true;
}

void UMainMenuPluginHUDComponent::BeginPlay()
{
	Super::BeginPlay();


	if (GetWorld())
	{
		const FString LevelName = GetWorld()->GetMapName();
		
		if (LevelName.Find(MainMenuMapName) != -1)
		{
			SetMainMenuMode(EMainMenuMode::MainMenu);
		}
		else SetMainMenuMode(EMainMenuMode::Game);
	}
}



std::shared_ptr<FMainMenuModeFactory> UMainMenuPluginHUDComponent::GetMenuModeFactory()
{
	return std::shared_ptr<FMainMenuModeFactory>(new FMainMenuModeFactory());
}

std::shared_ptr<FMenuPluginFactoryButton> UMainMenuPluginHUDComponent::GetMenuButtonsFactory()
{
	return std::shared_ptr<FMenuPluginFactoryButton>(new FMenuPluginFactoryButton());
}


void UMainMenuPluginHUDComponent::SetMainMenuMode(EMainMenuMode NewMode, bool WithoutCheck)
{
	if (CurrentMode != NewMode || WithoutCheck)
	{
		if (CurrentMode != EMainMenuMode::end) MenuModes[(int)CurrentMode]->UnSetMode();
		MenuModes[(int)NewMode]->SetMode();
		CurrentMode = NewMode;
	}
	
}





void UMainMenuPluginHUDComponent::GetAllKeyBindings(TArray<FInputActionKeyMapping>& Bindings)
{
	Bindings.Empty();

	const UInputSettings* Settings = GetDefault<UInputSettings>();
	if (!Settings) return;

	const TArray<FInputActionKeyMapping>& Actions = Settings->ActionMappings;

	for (const FInputActionKeyMapping& Each : Actions)
	{
		Bindings.Add(Each);
	}
}

void UMainMenuPluginHUDComponent::EliminatePauseText()
{
	if (GetWorld() && GetWorld()->GetGameViewport())
	{
		GetWorld()->GetGameViewport()->SetSuppressTransitionMessage(true);
	}
	return;
}

void UMainMenuPluginHUDComponent::ButtonClick(EMainMenuPluginButtonType ButtonType)
{
	Buttons[(int)ButtonType]->Click();
}

FText UMainMenuPluginHUDComponent::GetButtonName(EMainMenuPluginButtonType ButtonType) const
{
	return Buttons[(int)ButtonType]->GetName();
}




FKey UMainMenuPluginHUDComponent::GetMouseWheelInput(const FPointerEvent& PointerEvent)
{
	if (PointerEvent.GetWheelDelta() > 0)
	{
		
		return EKeys::MouseScrollUp;
	}
	else
	{
		return EKeys::MouseScrollDown;
	}

}

FString UMainMenuPluginHUDComponent::DateToStringRus(FDateTime Date)
{
	FString DataLoc;
	if (Date.GetDay() > 9)
	{
		DataLoc = FString::FromInt(Date.GetDay());
	}
	else
	{
		DataLoc = "0" + FString::FromInt(Date.GetDay());
	}

	DataLoc = DataLoc + ".";

	if (Date.GetMonth() > 9)
	{
		DataLoc = DataLoc + FString::FromInt(Date.GetMonth());
	}
	else
	{
		DataLoc = DataLoc + "0" + FString::FromInt(Date.GetMonth());
	}
	DataLoc = DataLoc + "." + FString::FromInt(Date.GetYear());

	return DataLoc;
}

FString UMainMenuPluginHUDComponent::DateToTimeRus(FDateTime Date, FString Separator)
{
	FString DataLoc;


	if (Date.GetHour() > 9)
	{
		DataLoc = FString::FromInt(Date.GetHour());
	}
	else
	{
		DataLoc = "0" + FString::FromInt(Date.GetHour());
	}
	DataLoc = DataLoc + Separator;


	if (Date.GetMinute() > 9)
	{
		DataLoc = DataLoc + FString::FromInt(Date.GetMinute());
	}
	else
	{
		DataLoc = DataLoc + "0" + FString::FromInt(Date.GetMinute());
	}


	DataLoc = DataLoc + Separator;

	if (Date.GetSecond() > 9)
	{
		DataLoc = DataLoc + FString::FromInt(Date.GetSecond());
	}
	else
	{
		DataLoc = DataLoc + "0" + FString::FromInt(Date.GetSecond());
	}


	return DataLoc;
}