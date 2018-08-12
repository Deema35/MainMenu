// Copyright 2018 Pavlov Dmitriy

#pragma once

#include "Components/ActorComponent.h"
#include <memory>
#include <vector>
#include <functional>
#include "Classes/GameFramework/PlayerInput.h"
#include "KeyBindMenu.h"
#include "Input/Events.h"
#include "MainMenuCore.h"
#include "MenuSettingsProperty.h"
#include "GameSettings.h"
#include "MainMenuPluginHUDComponent.generated.h"

class USoundClass;
class UUserWidget;
class FMainMenuPluginButtonBase;
class FMainMenuModeBase;
enum class EMainMenuPluginButtonType : uint8;
enum class EMainMenuMode : uint8;
enum class EQualityLevels : uint8;
class UTFCPGameInstance;
class ATFCPGameState;
class FMenuPluginFactoryButton;
class FMainMenuModeFactory;
class UMainMenuRadarHUDWidget;


/**
 * 
 */




UCLASS(ClassGroup = (MainMenuPlugin), BlueprintType, meta = (BlueprintSpawnableComponent, ShortTooltip = "A HUD component need for crate MainMenu(MainMenuPlugin)."))
class MAINMENUPLUGINRUNTIME_API UMainMenuPluginHUDComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UMainMenuPluginHUDComponent();

	~UMainMenuPluginHUDComponent();

	virtual void InitializeComponent() override;

	virtual void BeginPlay() override;

	void RefreshRadarTargets(const std::vector<FVector*>& Targets) { RadarTargets.clear();  RadarTargets.insert(RadarTargets.begin(), Targets.begin(), Targets.end()); }

	const std::vector<FVector*>& GetRadarTargets() const { return RadarTargets; }

public:

	UFUNCTION(BlueprintCallable, Category = "MainMenuPlugin")
		void SetMainMenuMode(EMainMenuMode NewMode, bool WithoutCheck = false);

	UFUNCTION(BlueprintCallable, Category = "MainMenuPlugin")
		void ButtonClick(EMainMenuPluginButtonType ButtonType);

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		FText GetButtonName(EMainMenuPluginButtonType ButtonType) const;


	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		 TArray<FInputActionKeyMapping>& GetKeyBinding() { return KeyBindMenu.KeyBinds; }

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
	EMainMenuMode GetMainMenuMode() const { return CurrentMode; }

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		FKey GetKeyInput(const FKeyEvent& KeyEvent) {return KeyEvent.GetKey(); }

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		FKey GetMouseKeyInput(const FPointerEvent& PointerEvent) { return PointerEvent.GetEffectingButton(); }

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		FKey GetMouseWheelInput(const FPointerEvent& PointerEvent);

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
	static FString DateToStringRus(FDateTime Date);

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
	static FString DateToTimeRus(FDateTime Date, FString Separator);

	UFUNCTION(BlueprintCallable, Category = "MainMenuPlugin")
		void SetPropertyInt(EMenuSettingsIntPropertyType PropertyType, int32 Value) { IntPropertys.Get(PropertyType).SetProperty(Value); }
	
	UFUNCTION(BlueprintCallable, Category = "MainMenuPlugin")
		void SetPropertyBool(EMenuSettingsBoolPropertyType PropertyType, bool Value) { BoolPropertys.Get(PropertyType).SetProperty(Value); }

	UFUNCTION(BlueprintCallable, Category = "MainMenuPlugin")
		void SetPropertyFloat(EMenuSettingsFloatPropertyType PropertyType, float Value) { FloatPropertys.Get(PropertyType).SetProperty(Value); }

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		int32 GetPropertyInt(EMenuSettingsIntPropertyType PropertyType)const { return IntPropertys.Get(PropertyType).GetProperty(); }

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		bool GetPropertyBool(EMenuSettingsBoolPropertyType PropertyType)const { return BoolPropertys.Get(PropertyType).GetProperty(); }

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		float GetPropertyFloat(EMenuSettingsFloatPropertyType PropertyType)const { return FloatPropertys.Get(PropertyType).GetProperty(); }

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		FText GetPropertyNameInt(EMenuSettingsIntPropertyType PropertyType) const { return IntPropertys.Get(PropertyType).GetPropertyName(); }

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		FText GetPropertyNameBool(EMenuSettingsBoolPropertyType PropertyType) const { return BoolPropertys.Get(PropertyType).GetPropertyName(); }

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		FText GetPropertyNameFloat(EMenuSettingsFloatPropertyType PropertyType) const { return FloatPropertys.Get(PropertyType).GetPropertyName(); }

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		const TArray<FString>& GetResolutionList() const { return GameSettings.ResolutionList; }

	UFUNCTION(BlueprintPure, Category = "MainMenuPlugin")
		FString GetCurrentResolution() const { return GameSettings.GetStringFromResolution(GameSettings.CurrentResolution); }

	UFUNCTION(BlueprintCallable, Category = "MainMenuPlugin")
		void SetCurrentResolution(FString Resolution) { GameSettings.CurrentResolution = GameSettings.GetResolutionFromString(Resolution); }

	UFUNCTION(BlueprintCallable, Category = "MainMenuPlugin")
		bool SetKey(FKey Key, int32 KeyNum) { return KeyBindMenu.SetKey(Key, KeyNum); }


public:

	

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USoundClass* SoundClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString MainMenuMapName = "MainMenu";

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = UI)
		TSubclassOf<UUserWidget> GameScreenWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = UI)
		TSubclassOf<UUserWidget> MainMenuWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = UI)
		TSubclassOf<UUserWidget> GameMenuWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = UI)
		TSubclassOf<UUserWidget> SettingsMenuWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = UI)
		TSubclassOf<UUserWidget> KeyBindMenuWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = UI)
		TSubclassOf<UUserWidget> TitlesMenuWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = UI)
	TSubclassOf<UUserWidget> ControlWidget;


	UPROPERTY(BlueprintReadOnly)
	FGameSettings GameSettings;

	FKeyBindMenu KeyBindMenu;

	

private:
	
	void GetAllKeyBindings(TArray<FInputActionKeyMapping>& Bindings);

	void EliminatePauseText();

	std::shared_ptr<FMainMenuModeFactory> GetMenuModeFactory();

	std::shared_ptr<FMenuPluginFactoryButton> GetMenuButtonsFactory();

	virtual std::shared_ptr<FMainMenuModeFactory> CreateMenuModeFactory();

	virtual std::shared_ptr<FMenuPluginFactoryButton> CreateMenuButtonsFactory();


	bool CheckWidgets();

private:

	ItemStorage<FMainMenuPluginButtonBase, EMainMenuPluginButtonType> Buttons;

	ItemStorage<FMainMenuModeBase, EMainMenuMode> MenuModes;

	ItemStorage<FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>, EMenuSettingsIntPropertyType> IntPropertys;

	ItemStorage<FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>, EMenuSettingsBoolPropertyType> BoolPropertys;

	ItemStorage<FMenuSettingsPropertyBase<float, EMenuSettingsFloatPropertyType>, EMenuSettingsFloatPropertyType> FloatPropertys;

	EMainMenuMode CurrentMode;

	std::vector<FVector*> RadarTargets;

	std::shared_ptr<FMenuPluginFactoryButton> ButtonFactory;

	std::shared_ptr<FMainMenuModeFactory> ModeFactory;

};


