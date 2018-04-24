// Copyright 2018 Pavlov Dmitriy

#pragma once
#include "CoreMinimal.h"
#include "GameSettings.generated.h"

class UGameUserSettings;
class USoundClass;
class AMainMenuPluginHUD;


UENUM(BlueprintType)
enum class EQualityLevels : uint8
{
	Low,
	Medium,
	Hight,
	Epic
};
UENUM(BlueprintType)
enum class ELanguage : uint8
{
	Russian,
	English
};

FString ELanguageGetString(ELanguage Language);

ELanguage ELanguageFromString(FString LanguageStr);

USTRUCT(BlueprintType)
struct  FGameSettings
{
	GENERATED_BODY()
public:

	FGameSettings();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ResolutionList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FIntPoint CurrentResolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AntiAliasing = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EffectsQuality = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PostProcess = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ShadowQuality = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TextureQuality = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ViewDistanceQuality = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FullScreen = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool VSync = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool ShowFPS = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MouseSensitive = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RadarDeep = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Language = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SoundVolum = 50;

	AMainMenuPluginHUD* HUD = nullptr;
	
public:

	void SetSetting();
	
	void GetCurrentSettings();

	static FIntPoint GetResolutionFromString(FString Resolution);

	static FString GetStringFromResolution(FIntPoint Resolution);

	

private:

	bool SetNonResolutionSettings();

	bool SetResolutionSettings();

	void SetNotVideoSettings();

	bool SaveNotVideoSettings();

	bool SaveNotResolutionSettings();

	bool GetCurrentVideoSettings();

	bool GetNotVideoSettings();

	bool GetNotResolutionSettings();

	UGameUserSettings* GetGameUserSettings();

	bool GetSupportedScreenResolutions(TArray<FString>& Resolutions);

	void  ChangeLocalization(ELanguage Language);

	ELanguage GetDefayltLocalization();

	static bool SoundVolumeChange(USoundClass* SoundClassObject, float NewVolume);

	

};
