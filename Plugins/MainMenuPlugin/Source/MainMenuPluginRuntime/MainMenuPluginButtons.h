// Copyright 2018 Pavlov Dmitriy
#pragma once
#include "CoreMinimal.h"
#include <memory>
#include "UObject/Class.h"  //For UENUM

#define LOCTEXT_NAMESPACE "MainMenuPlugin"

class AMainMenuPluginHUD;
class FMainMenuPluginButtonBase;

UENUM(BlueprintType)
enum class  EMainMenuPluginButtonType : uint8
{
	Exit,
	FreeRace,
	CheckPointMode,
	Settings,
	OK,
	Cancel,
	Apply,
	Resume,
	Delete,
	NewRace,
	MainMenu,
	Load,
	RepeatRace,
	KeyBind,
	DefaultKeys,
	Titles,
	Back,
	Restart,
	Control,
	end
};

class MAINMENUPLUGINRUNTIME_API FMenuPluginFactoryButton
{
public:
	virtual std::shared_ptr<FMainMenuPluginButtonBase> ButtonCreate(EMainMenuPluginButtonType ButtonTrpe, AMainMenuPluginHUD* OwnedHUD);
};



class FMainMenuPluginButtonBase
{
public:
	FMainMenuPluginButtonBase(AMainMenuPluginHUD* _OwnedHUD) : OwnedHUD(_OwnedHUD) {}

	virtual ~FMainMenuPluginButtonBase() {}

	virtual EMainMenuPluginButtonType GetType() const = 0;

	virtual void Click() = 0;

	virtual FText GetName() const = 0;

protected:

	AMainMenuPluginHUD* OwnedHUD = nullptr;

};

class FMainMenuPluginButtonApply : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonApply(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::Apply;}

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonApply", "Apply"); }

};

class FMainMenuPluginButtonBack : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonBack(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::Back; }

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonBack", "Back"); }

};

class FMainMenuPluginButtonCancel : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonCancel(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::Cancel; }

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonCancel", "Cancel"); }

};

class FMainMenuPluginButtonCheckPointMode : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonCheckPointMode(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::CheckPointMode; }

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonCheckPointMode", "Checkpoint mode"); }

};

class FMainMenuPluginButtonDefaultKeys : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonDefaultKeys(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::DefaultKeys; }

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonDefaultKeys", "Default keys"); }

};

class FMainMenuPluginButtonDelete : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonDelete(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::Delete; }

	virtual void Click() override {};

	virtual FText GetName() const { return LOCTEXT("ButtonDelete", "Delete"); }

};

class FMainMenuPluginButtonTitles : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonTitles(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::Titles; }

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonTitles", "Titles"); }

};

class FMainMenuPluginButtonFreeRace : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonFreeRace(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::FreeRace; }

	virtual void Click() override {};

	virtual FText GetName() const { return LOCTEXT("ButtonFreeRace", "Free road"); }

};

class FMainMenuPluginButtonKeyBind : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonKeyBind(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::KeyBind; }

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonKeyBind", "Key bind"); }

};

class FMainMenuPluginButtonLoad : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonLoad(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::Load; }

	virtual void Click() override {};

	virtual FText GetName() const { return LOCTEXT("ButtonLoad", "Load"); }

};

class FMainMenuPluginButtonMainMenu : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonMainMenu(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::MainMenu; }

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonMainMenu", "Main menu"); }

};

class FMainMenuPluginButtonNewRace : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonNewRace(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::NewRace; }

	virtual void Click() override {};

	virtual FText GetName() const { return LOCTEXT("ButtonNewRace", "New race"); }

};

class FMainMenuPluginButtonOK : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonOK(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::OK; }

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonOK", "OK"); }

};

class FMainMenuPluginButtonRepeatRace : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonRepeatRace(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::RepeatRace; }

	virtual void Click() override {};

	virtual FText GetName() const { return LOCTEXT("ButtonRepeatRace", "Repeat race"); }

};

class FMainMenuPluginButtonRestart : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonRestart(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::Restart; }

	virtual void Click() override {};

	virtual FText GetName() const { return LOCTEXT("ButtonRestart", "Restart"); }

};

class FMainMenuPluginButtonResume : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonResume(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::Resume; }

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonResume", "Resume"); }

};

class FMainMenuPluginButtonSettings : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonSettings(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::Settings; }

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonSettings", "Settings"); }

};

class FMainMenuPluginButtonExit : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonExit(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::Exit; }

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonExit", "Exit"); }

};

class FMainMenuPluginButtonControl : public FMainMenuPluginButtonBase
{
public:

	FMainMenuPluginButtonControl(AMainMenuPluginHUD* OwnedHUD) : FMainMenuPluginButtonBase(OwnedHUD) {}

	virtual EMainMenuPluginButtonType GetType() const override { return EMainMenuPluginButtonType::Control; }

	virtual void Click() override;

	virtual FText GetName() const { return LOCTEXT("ButtonControl", "Control"); }

};


#undef LOCTEXT_NAMESPACE 