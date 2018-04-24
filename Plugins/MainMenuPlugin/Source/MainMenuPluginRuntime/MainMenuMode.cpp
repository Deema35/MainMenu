// Copyright 2018 Pavlov Dmitriy
#include "MainMenuMode.h"
#include "MainMenuPluginHUD.h"
#include "Engine/World.h"
#include "Blueprint/UserWidget.h"

static_assert((int)EMainMenuMode::end == 12, "Need update factory metod");

std::shared_ptr<FMainMenuModeBase> FMainMenuModeFactory::Create(EMainMenuMode MenuMode, AMainMenuPluginHUD* OwnedHUD)
{
	switch (MenuMode)
	{
	case EMainMenuMode::Game:

		return std::shared_ptr<FMainMenuModeBase>(new FMainMenuModeGame(OwnedHUD));

	case EMainMenuMode::CheckPointModeEnd:

		return std::shared_ptr<FMainMenuModeBase>(new FMainMenuModeCheckPointModeEnd(OwnedHUD));

	case EMainMenuMode::CheckPointModeTune:

		return std::shared_ptr<FMainMenuModeBase>(new FMainMenuModeCheckPointModeTune(OwnedHUD));

	case EMainMenuMode::TitlesMenu:

		return std::shared_ptr<FMainMenuModeBase>(new FMainMenuModeTitlesMenu(OwnedHUD));

	case EMainMenuMode::GameMenu:

		return std::shared_ptr<FMainMenuModeBase>(new FMainMenuModeGameMenu(OwnedHUD));

	case EMainMenuMode::GameSettings:

		return std::shared_ptr<FMainMenuModeBase>(new FMainMenuModeGameSettings(OwnedHUD));

	case EMainMenuMode::GameKeyBind:

		return std::shared_ptr<FMainMenuModeBase>(new FMainMenuModeGameKeyBind(OwnedHUD));

	case EMainMenuMode::MainMenuKeyBing:

		return std::shared_ptr<FMainMenuModeBase>(new FMainMenuModeMainMenuKeyBind(OwnedHUD));


	case EMainMenuMode::MainMenu:

		return std::shared_ptr<FMainMenuModeBase>(new FMainMenuModeMainMenu(OwnedHUD));

	case EMainMenuMode::Settings:

		return std::shared_ptr<FMainMenuModeBase>(new FMainMenuModeSettings(OwnedHUD));

	case EMainMenuMode::GameControl:

		return std::shared_ptr<FMainMenuModeBase>(new FMainMenuModeGameControl(OwnedHUD));

	case EMainMenuMode::MainMenuControl:

		return std::shared_ptr<FMainMenuModeBase>(new FMainMenuModeMainMenuControl(OwnedHUD));

	default: throw;
	}
}
//*********************************************
//FMainMenuModeBase
//********************************************

void FMainMenuModeBase::SetGamePaused(bool bIsPaused)
{
	APlayerController* PlayerController = OwnedHUD->GetWorld()->GetFirstPlayerController();

	if (PlayerController)
	{
		PlayerController->SetPause(bIsPaused);
	}
}

void FMainMenuModeBase::SetMouseCursorEnabel(bool IsEnabel)
{
	APlayerController* PlayerController = OwnedHUD->GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		PlayerController->bShowMouseCursor = IsEnabel;
		PlayerController->bEnableClickEvents = IsEnabel;
		PlayerController->bEnableMouseOverEvents = IsEnabel;
		if (IsEnabel)
		{
			//FInputModeGameAndUI InputMode;
			FInputModeUIOnly InputMode;
			InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			if (ModeWidgets.size() != 0)
			{
				InputMode.SetWidgetToFocus(ModeWidgets[0]->TakeWidget());
			}
			
			PlayerController->SetInputMode(InputMode);
		}
		else
		{
			FInputModeGameOnly InputMode;
			InputMode.SetConsumeCaptureMouseDown(false);
			PlayerController->SetInputMode(InputMode);
		}
	}
}

void FMainMenuModeBase::SetMode()
{ 
	SetGamePaused(IsGamePause());
	SetMouseCursorEnabel(IsMouseCursoreEnabel());
}

void FMainMenuModeBase::UnSetMode()
{
	for (int i = 0; i < ModeWidgets.size(); i++)
	{
		ModeWidgets[i]->RemoveFromParent();
	}

	ModeWidgets.clear();
}

void FMainMenuModeBase::CreateMenuModeWidgets(TSubclassOf<UUserWidget> WidgetClass)
{
	if (WidgetClass)
	{
		UUserWidget* WidgetInstance = CreateWidget<UUserWidget>(OwnedHUD->GetWorld(), WidgetClass);

		if (!WidgetInstance->GetIsVisible())
		{
			WidgetInstance->AddToViewport();
		}

		ModeWidgets.push_back(WidgetInstance);
	}

}

//***********************************
//FMainMenuModeGame
//**************************************
void FMainMenuModeGame::SetMode()
{
	CreateMenuModeWidgets(OwnedHUD->GameScreenWidget);

	FMainMenuModeBase::SetMode();

}

//***********************************
//FMainMenuModeMainMenu
//**************************************
void FMainMenuModeMainMenu::SetMode()
{
	
	bool Flag = OwnedHUD->MainMenuWidget;
	CreateMenuModeWidgets(OwnedHUD->MainMenuWidget);

	FMainMenuModeBase::SetMode();
}

//***********************************
//FMainMenuModeGameMenu
//**************************************
void FMainMenuModeGameMenu::SetMode()
{

	
	CreateMenuModeWidgets(OwnedHUD->GameMenuWidget);

	FMainMenuModeBase::SetMode();
}


//***********************************
//FMainMenuModeSettings
//**************************************

void FMainMenuModeSettings::SetMode()
{


	CreateMenuModeWidgets(OwnedHUD->SettingsMenuWidget);

	FMainMenuModeBase::SetMode();
}

//***********************************
//FMainMenuModeGameSettings
//**************************************

void FMainMenuModeGameSettings::SetMode()
{


	CreateMenuModeWidgets(OwnedHUD->SettingsMenuWidget);

	FMainMenuModeBase::SetMode();

}

//***********************************
//FMainMenuModeMainMenuKeyBind
//**************************************

void FMainMenuModeMainMenuKeyBind::SetMode()
{


	CreateMenuModeWidgets(OwnedHUD->KeyBindMenuWidget);

	FMainMenuModeBase::SetMode();
}

//***********************************
//FMainMenuModeGameKeyBind
//**************************************

void FMainMenuModeGameKeyBind::SetMode()
{


	CreateMenuModeWidgets(OwnedHUD->KeyBindMenuWidget);

	FMainMenuModeBase::SetMode();
}

//***********************************
//FMainMenuModeMainMenuKeyBind
//**************************************

void FMainMenuModeTitlesMenu::SetMode()
{


	CreateMenuModeWidgets(OwnedHUD->TitlesMenuWidget);

	FMainMenuModeBase::SetMode();
}


//***********************************
//FMainMenuModeGameControl
//**************************************

void FMainMenuModeGameControl::SetMode()
{


	CreateMenuModeWidgets(OwnedHUD->ControlWidget);

	FMainMenuModeBase::SetMode();
}

//***********************************
//FMainMenuModeMainMenuControl
//**************************************

void FMainMenuModeMainMenuControl::SetMode()
{


	CreateMenuModeWidgets(OwnedHUD->ControlWidget);

	FMainMenuModeBase::SetMode();
}
