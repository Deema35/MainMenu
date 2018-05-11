// Copyright 2018 Pavlov Dmitriy
#pragma once
#include "CoreMinimal.h"
#include <memory>
#include <vector>
#include "UObject/Class.h"  //For UENUM

class FMainMenuModeBase;
class UMainMenuPluginHUDComponent;
class UUserWidget;

UENUM(BlueprintType)
enum class EMainMenuMode : uint8
{
	Game,
	MainMenu,
	GameMenu,
	Settings,
	GameSettings,
	MainMenuKeyBing,
	GameKeyBind,
	TitlesMenu,
	CheckPointModeTune,
	CheckPointModeEnd,
	GameControl,
	MainMenuControl,
	end
};

class MAINMENUPLUGINRUNTIME_API FMainMenuModeFactory
{
public:
	virtual std::shared_ptr<FMainMenuModeBase> Create(EMainMenuMode MenuMode, UMainMenuPluginHUDComponent* OwnedHUD);
};



class MAINMENUPLUGINRUNTIME_API FMainMenuModeBase
{
public:
	FMainMenuModeBase(UMainMenuPluginHUDComponent* _OwnedHUD) : OwnedHUD(_OwnedHUD) {}

	virtual ~FMainMenuModeBase() {}

	virtual EMainMenuMode GetType() const = 0;

	virtual bool IsGamePause() const = 0;

	virtual void SetMode();

	virtual void UnSetMode();

	virtual bool IsMouseCursoreEnabel() const = 0;

private:

	void SetGamePaused(bool bIsPaused);

	void SetMouseCursorEnabel(bool IsEnabel);

protected:

	UMainMenuPluginHUDComponent* OwnedHUD = nullptr;

	std::vector<UUserWidget*> ModeWidgets;

protected:

	void CreateMenuModeWidgets(TSubclassOf<UUserWidget> WidgetClass);

};

class MAINMENUPLUGINRUNTIME_API FMainMenuModeGame : public FMainMenuModeBase
{
public:
	FMainMenuModeGame(UMainMenuPluginHUDComponent* OwnedHUD) : FMainMenuModeBase(OwnedHUD) {}

	virtual EMainMenuMode GetType() const override { return EMainMenuMode::Game; }

	virtual bool IsGamePause() const override { return false; }

	virtual bool IsMouseCursoreEnabel() const override { return false; }

	virtual void SetMode() override;
};

class FMainMenuModeMainMenu : public FMainMenuModeBase
{
public:
	FMainMenuModeMainMenu(UMainMenuPluginHUDComponent* OwnedHUD) : FMainMenuModeBase(OwnedHUD) {}

	virtual EMainMenuMode GetType() const override { return EMainMenuMode::MainMenu; }

	virtual bool IsGamePause() const override { return false; }

	virtual bool IsMouseCursoreEnabel() const override { return true; }

	virtual void SetMode() override;
};

class FMainMenuModeGameMenu : public FMainMenuModeBase
{
public:
	FMainMenuModeGameMenu(UMainMenuPluginHUDComponent* OwnedHUD) : FMainMenuModeBase(OwnedHUD) {}

	virtual EMainMenuMode GetType() const override { return EMainMenuMode::GameMenu; }

	virtual bool IsGamePause() const override { return true; }

	virtual bool IsMouseCursoreEnabel() const override { return true; }

	virtual void SetMode() override;
};

class FMainMenuModeSettings : public FMainMenuModeBase
{
public:
	FMainMenuModeSettings(UMainMenuPluginHUDComponent* OwnedHUD) : FMainMenuModeBase(OwnedHUD) {}

	virtual EMainMenuMode GetType() const override { return EMainMenuMode::Settings; }

	virtual bool IsGamePause() const override { return false; }

	virtual bool IsMouseCursoreEnabel() const override { return true; }

	virtual void SetMode() override;
};

class FMainMenuModeGameSettings : public FMainMenuModeBase
{
public:
	FMainMenuModeGameSettings(UMainMenuPluginHUDComponent* OwnedHUD) : FMainMenuModeBase(OwnedHUD) {}

	virtual EMainMenuMode GetType() const override { return EMainMenuMode::GameSettings; }

	virtual bool IsGamePause() const override { return true; }

	virtual bool IsMouseCursoreEnabel() const override { return true; }

	virtual void SetMode() override;
};

class FMainMenuModeMainMenuKeyBind : public FMainMenuModeBase
{
public:
	FMainMenuModeMainMenuKeyBind(UMainMenuPluginHUDComponent* OwnedHUD) : FMainMenuModeBase(OwnedHUD) {}

	virtual EMainMenuMode GetType() const override { return EMainMenuMode::MainMenuKeyBing; }

	virtual bool IsGamePause() const override { return false; }

	virtual bool IsMouseCursoreEnabel() const override { return true; }

	virtual void SetMode() override;
};

class FMainMenuModeGameKeyBind : public FMainMenuModeBase
{
public:
	FMainMenuModeGameKeyBind(UMainMenuPluginHUDComponent* OwnedHUD) : FMainMenuModeBase(OwnedHUD) {}

	virtual EMainMenuMode GetType() const override { return EMainMenuMode::GameKeyBind; }

	virtual bool IsGamePause() const override { return true; }

	virtual bool IsMouseCursoreEnabel() const override { return true; }

	virtual void SetMode() override;
};

class FMainMenuModeTitlesMenu : public FMainMenuModeBase
{
public:
	FMainMenuModeTitlesMenu(UMainMenuPluginHUDComponent* OwnedHUD) : FMainMenuModeBase(OwnedHUD) {}

	virtual EMainMenuMode GetType() const override { return EMainMenuMode::TitlesMenu; }

	virtual bool IsGamePause() const override { return false; }

	virtual bool IsMouseCursoreEnabel() const override { return true; }

	virtual void SetMode() override;
};


class FMainMenuModeCheckPointModeTune : public FMainMenuModeBase
{
public:
	FMainMenuModeCheckPointModeTune(UMainMenuPluginHUDComponent* OwnedHUD) : FMainMenuModeBase(OwnedHUD) {}

	virtual EMainMenuMode GetType() const override { return EMainMenuMode::CheckPointModeTune; }

	virtual bool IsGamePause() const override { return false; }

	virtual bool IsMouseCursoreEnabel() const override { return true; }

	
};

class FMainMenuModeCheckPointModeEnd : public FMainMenuModeBase
{
public:
	FMainMenuModeCheckPointModeEnd(UMainMenuPluginHUDComponent* OwnedHUD) : FMainMenuModeBase(OwnedHUD) {}

	virtual EMainMenuMode GetType() const override { return EMainMenuMode::CheckPointModeEnd; }

	virtual bool IsGamePause() const override { return true; }

	virtual bool IsMouseCursoreEnabel() const override { return true; }


};

class FMainMenuModeGameControl : public FMainMenuModeBase
{
public:
	FMainMenuModeGameControl(UMainMenuPluginHUDComponent* OwnedHUD) : FMainMenuModeBase(OwnedHUD) {}

	virtual EMainMenuMode GetType() const override { return EMainMenuMode::GameControl; }

	virtual bool IsGamePause() const override { return true; }

	virtual bool IsMouseCursoreEnabel() const override { return true; }

	virtual void SetMode() override;

};

class FMainMenuModeMainMenuControl : public FMainMenuModeBase
{
public:
	FMainMenuModeMainMenuControl(UMainMenuPluginHUDComponent* OwnedHUD) : FMainMenuModeBase(OwnedHUD) {}

	virtual EMainMenuMode GetType() const override { return EMainMenuMode::MainMenuControl; }

	virtual bool IsGamePause() const override { return false; }

	virtual bool IsMouseCursoreEnabel() const override { return true; }

	virtual void SetMode() override;

};