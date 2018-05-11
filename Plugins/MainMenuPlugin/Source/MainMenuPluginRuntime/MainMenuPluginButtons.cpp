// Copyright 2018 Pavlov Dmitriy
#include "MainMenuPluginButtons.h"
#include "MainMenuPluginHUDComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "SaveObjectsMenu.h"
#include "GameFramework/SaveGame.h"

static_assert((int)EMainMenuPluginButtonType::end == 19, "Need update factory metod");

std::shared_ptr<FMainMenuPluginButtonBase> FMenuPluginFactoryButton::ButtonCreate(EMainMenuPluginButtonType ButtonTrpe, UMainMenuPluginHUDComponent* OwnedHUD)
{
	switch (ButtonTrpe)
	{
	case EMainMenuPluginButtonType::Apply:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonApply(OwnedHUD));

	case EMainMenuPluginButtonType::Back:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonBack(OwnedHUD));

	case EMainMenuPluginButtonType::Cancel:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonCancel(OwnedHUD));

	case EMainMenuPluginButtonType::CheckPointMode:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonCheckPointMode(OwnedHUD));

	case EMainMenuPluginButtonType::DefaultKeys:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonDefaultKeys(OwnedHUD));

	case EMainMenuPluginButtonType::Delete:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonDelete(OwnedHUD));

	case EMainMenuPluginButtonType::Exit:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonExit(OwnedHUD));

	case EMainMenuPluginButtonType::Titles:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonTitles(OwnedHUD));

	case EMainMenuPluginButtonType::FreeRace:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonFreeRace(OwnedHUD));

	case EMainMenuPluginButtonType::KeyBind:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonKeyBind(OwnedHUD));

	case EMainMenuPluginButtonType::Load:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonLoad(OwnedHUD));

	case EMainMenuPluginButtonType::MainMenu:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonMainMenu(OwnedHUD));

	case EMainMenuPluginButtonType::NewRace:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonNewRace(OwnedHUD));

	case EMainMenuPluginButtonType::OK:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonOK(OwnedHUD));

	case EMainMenuPluginButtonType::RepeatRace:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonRepeatRace(OwnedHUD));

	case EMainMenuPluginButtonType::Restart:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonRestart(OwnedHUD));

	case EMainMenuPluginButtonType::Resume:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonResume(OwnedHUD));

	case EMainMenuPluginButtonType::Settings:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonSettings(OwnedHUD));

	case EMainMenuPluginButtonType::Control:

		return std::shared_ptr<FMainMenuPluginButtonBase>(new FMainMenuPluginButtonControl(OwnedHUD));


	default : throw;
	}
}

//***********************************
//FMainMenuPluginButtonCancel
//**************************************

void FMainMenuPluginButtonApply::Click()
{
	OwnedHUD->GameSettings.SetSetting();
}

//***********************************
//FMainMenuPluginButtonBack
//**************************************

void FMainMenuPluginButtonBack::Click()
{
	switch (OwnedHUD->GetMainMenuMode())
	{
	case EMainMenuMode::TitlesMenu:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::MainMenu);

		break;

	case EMainMenuMode::CheckPointModeTune:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::MainMenu);

		break;

	case EMainMenuMode::GameControl:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::GameMenu);

		break;

	case EMainMenuMode::MainMenuControl:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::MainMenu);

		break;

	default: throw;
	}
}

//***********************************
//FMainMenuPluginButtonCancel
//**************************************

void FMainMenuPluginButtonCancel::Click()
{
	switch (OwnedHUD->GetMainMenuMode())
	{
	case EMainMenuMode::GameSettings:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::GameMenu);

		OwnedHUD->GameSettings.GetCurrentSettings();

		break;

	case EMainMenuMode::Settings:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::MainMenu);

		OwnedHUD->GameSettings.GetCurrentSettings();

		break;

	case EMainMenuMode::MainMenuKeyBing:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::MainMenu);
		OwnedHUD->KeyBindMenu.GetAllKeyBindings();
		break;

	case EMainMenuMode::GameKeyBind:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::GameMenu);
		OwnedHUD->KeyBindMenu.GetAllKeyBindings();
		break;

	case EMainMenuMode::CheckPointModeTune:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::MainMenu);

		break;

	default: throw;
	}
}

//***********************************
//FMainMenuPluginButtonCheckPointMode
//**************************************

void FMainMenuPluginButtonCheckPointMode::Click()
{

	//OwnedHUD->SetMainMenuMode(EMainMenuMode::CheckPointModeTune);
}

//***********************************
//FMainMenuPluginButtonDefaultKeys
//**************************************

void FMainMenuPluginButtonDefaultKeys::Click()
{
	OwnedHUD->KeyBindMenu.SetDefaultKeys();
	OwnedHUD->SetMainMenuMode(OwnedHUD->GetMainMenuMode(), true);
}

//***********************************
//FMainMenuPluginButtonDelete
//**************************************



//***********************************
//FMainMenuPluginButtonTitles
//**************************************

void FMainMenuPluginButtonTitles::Click()
{
	OwnedHUD->SetMainMenuMode(EMainMenuMode::TitlesMenu);
	
}


//***********************************
//FMainMenuPluginButtonKeyBind
//**************************************

void FMainMenuPluginButtonKeyBind::Click()
{
	switch (OwnedHUD->GetMainMenuMode())
	{
	case EMainMenuMode::GameMenu:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::GameKeyBind);

		break;

	case EMainMenuMode::MainMenu:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::MainMenuKeyBing);

		break;

	default: throw;
	}
}



//***********************************
//FMainMenuPluginButtonMainMenu
//**************************************

void FMainMenuPluginButtonMainMenu::Click()
{
	UGameplayStatics::OpenLevel(OwnedHUD->GetWorld(), FName(*OwnedHUD->MainMenuMapName));
}



//***********************************
//FMainMenuPluginButtonOK
//**************************************

void FMainMenuPluginButtonOK::Click()
{
	OwnedHUD->GameSettings.SetSetting();

	switch (OwnedHUD->GetMainMenuMode())
	{
	case EMainMenuMode::GameSettings:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::GameMenu);

		break;

	case EMainMenuMode::Settings:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::MainMenu);

		break;

	case EMainMenuMode::MainMenuKeyBing:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::MainMenu);
		OwnedHUD->KeyBindMenu.ReBindKeys();

		break;

	case EMainMenuMode::GameKeyBind:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::GameMenu);
		OwnedHUD->KeyBindMenu.ReBindKeys();

		break;

	default: throw;
	}
}



//***********************************
//FMainMenuPluginButtonResume
//**************************************

void FMainMenuPluginButtonResume::Click()
{
	OwnedHUD->SetMainMenuMode(EMainMenuMode::Game);
	
}



//***********************************
//FMainMenuPluginButtonSettings
//**************************************

void FMainMenuPluginButtonSettings::Click()
{
	switch (OwnedHUD->GetMainMenuMode())
	{
	case EMainMenuMode::GameMenu:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::GameSettings);

		break;

	case EMainMenuMode::MainMenu:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::Settings);

		break;

	default: throw;
	}
}

//***********************************
//FMainMenuPluginButtonExit
//**************************************

void FMainMenuPluginButtonExit::Click()
{
	OwnedHUD->GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
}

//***********************************
//FMainMenuPluginButtonControl
//**************************************

void FMainMenuPluginButtonControl::Click()
{
	switch (OwnedHUD->GetMainMenuMode())
	{
	case EMainMenuMode::GameMenu:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::GameControl);

		break;

	case EMainMenuMode::MainMenu:

		OwnedHUD->SetMainMenuMode(EMainMenuMode::MainMenuControl);

		break;

	default: throw;
	}
}