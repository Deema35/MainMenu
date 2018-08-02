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
#include "MainMenuMode.h"

#include "GameSettings.h"

UMainMenuPluginHUDComponent::UMainMenuPluginHUDComponent() :
	Buttons([this](EMainMenuPluginButtonType ButtonType) {return GetMenuButtonsFactory()->ButtonCreate(ButtonType, this); } , EMainMenuPluginButtonType::end),
	MenuModes([this](EMainMenuMode ModeType) {return GetMenuModeFactory()->Create(ModeType, this); }, EMainMenuMode::end),
	IntPropertys([this](EMenuSettingsIntPropertyType PropertyType) {return EMenuSettingsIntPropertyTypeCreateInt(PropertyType, this); }, EMenuSettingsIntPropertyType::end),
	BoolPropertys([this](EMenuSettingsBoolPropertyType PropertyType) {return EMenuSettingsIntPropertyTypeCreateBool(PropertyType, this); }, EMenuSettingsBoolPropertyType::end),
	FloatPropertys([this](EMenuSettingsFloatPropertyType PropertyType) {return EMenuSettingsIntPropertyTypeCreateFloat(PropertyType, this); }, EMenuSettingsFloatPropertyType::end),
	CurrentMode(EMainMenuMode::end)
{
	bWantsInitializeComponent = true; 

}


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
		
		else
		{
			SetMainMenuMode(EMainMenuMode::Game);
		}
	}
}



std::shared_ptr<FMainMenuModeFactory> UMainMenuPluginHUDComponent::GetMenuModeFactory()
{
	if (!ModeFactory)
	{
		ModeFactory = std::shared_ptr<FMainMenuModeFactory>(new FMainMenuModeFactory());
	}
	return ModeFactory;
}

std::shared_ptr<FMenuPluginFactoryButton> UMainMenuPluginHUDComponent::GetMenuButtonsFactory()
{
	if (!ButtonFactory)
	{
		ButtonFactory = std::shared_ptr<FMenuPluginFactoryButton>(new FMenuPluginFactoryButton());
	}
	return ButtonFactory;
}


void UMainMenuPluginHUDComponent::SetMainMenuMode(EMainMenuMode NewMode, bool WithoutCheck)
{
	if (CurrentMode != NewMode || WithoutCheck)
	{
		if (CurrentMode != EMainMenuMode::end) MenuModes.Get(CurrentMode).UnSetMode();
		MenuModes.Get(NewMode).SetMode();
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
	Buttons.Get(ButtonType).Click();
}

FText UMainMenuPluginHUDComponent::GetButtonName(EMainMenuPluginButtonType ButtonType) const
{
	return Buttons.Get(ButtonType).GetName();
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