// Copyright 2018 Pavlov Dmitriy
#include "GameSettings.h"
#include "RHI.h"
#include "Engine/Engine.h"
#include "GameFramework/GameUserSettings.h"
#include "Misc/ConfigCacheIni.h"
#include "MainMenuPluginHUD.h"
#include "MainMenuGameInstance.h"
#include "Internationalization/Culture.h"

//*******************************************
//ELanguage
//*******************************************

FString ELanguageGetString(ELanguage Language)
{
	switch (Language)
	{
	case ELanguage::English:

		return FString("en");

	case ELanguage::Russian:

		return FString("ru");

	default: throw;
	}
}

ELanguage ELanguageFromString(FString LanguageStr)
{
	
	if (LanguageStr == FString("ru-RU"))
	{
		return ELanguage::Russian;
	}
	else
	{
		return ELanguage::English;
	}
}

//*******************************************
//FGameSettings
//*******************************************

FGameSettings::FGameSettings()
{
	Language = (int32)GetDefayltLocalization();
	GetCurrentSettings();
}

void FGameSettings::GetCurrentSettings()
{
	GetSupportedScreenResolutions(ResolutionList);

	GetCurrentVideoSettings();

	GetNotResolutionSettings();
	
	GetNotVideoSettings();
	
}

void FGameSettings::SetSetting()
{
	SetNonResolutionSettings();

	SetResolutionSettings();

	SetNotVideoSettings();

}

bool FGameSettings::GetSupportedScreenResolutions(TArray<FString>& Resolutions)
{
	FScreenResolutionArray ResolutionsArray;

	if (RHIGetAvailableResolutions(ResolutionsArray, true))  // "RHI" dependency
	{
		for (const FScreenResolutionRHI& Resolution : ResolutionsArray)
		{
			FString StrW = FString::FromInt(Resolution.Width);
			FString StrH = FString::FromInt(Resolution.Height);
			Resolutions.AddUnique(StrW + "x" + StrH);
		}

		return true;
	}

	return false; 
}

FString FGameSettings::GetStringFromResolution(FIntPoint Resolution)
{
	FString StrW = FString::FromInt(Resolution.X);
	FString StrH = FString::FromInt(Resolution.Y);
	
	return StrW + "x" + StrH;
}


bool FGameSettings::GetCurrentVideoSettings()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	

	CurrentResolution = Settings->GetScreenResolution();

	FullScreen = Settings->GetFullscreenMode() == EWindowMode::Fullscreen;

	

	return true;
}

bool FGameSettings::SetNonResolutionSettings()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	bool SettingsChange = false;

	if (Settings->ScalabilityQuality.AntiAliasingQuality != AntiAliasing)
	{
		Settings->ScalabilityQuality.AntiAliasingQuality = AntiAliasing;
		SettingsChange = true;
	}

	if (Settings->ScalabilityQuality.EffectsQuality != EffectsQuality)
	{
		Settings->ScalabilityQuality.EffectsQuality = EffectsQuality;
		SettingsChange = true;
	}

	if (Settings->ScalabilityQuality.PostProcessQuality != PostProcess)
	{
		Settings->ScalabilityQuality.PostProcessQuality = PostProcess;
		SettingsChange = true;
	}

	if (Settings->ScalabilityQuality.ShadowQuality != ShadowQuality)
	{
		Settings->ScalabilityQuality.ShadowQuality = ShadowQuality;
		SettingsChange = true;
	}

	if (Settings->ScalabilityQuality.TextureQuality != TextureQuality)
	{
		Settings->ScalabilityQuality.TextureQuality = TextureQuality;
		SettingsChange = true;
	}

	if (Settings->ScalabilityQuality.ViewDistanceQuality != ViewDistanceQuality)
	{
		Settings->ScalabilityQuality.ViewDistanceQuality = ViewDistanceQuality;
		SettingsChange = true;
	}

	if (Settings->ScalabilityQuality.EffectsQuality != EffectsQuality)
	{
		Settings->ScalabilityQuality.EffectsQuality = EffectsQuality;
		SettingsChange = true;
	}

	if (Settings->bUseVSync != VSync)
	{
		Settings->bUseVSync = VSync;
		SettingsChange = true;
	}
	

	if (SettingsChange)
	{
		Settings->ApplyNonResolutionSettings();
		SaveNotResolutionSettings();
		return true;
	}
	else return false;
	
}

bool FGameSettings::SetResolutionSettings()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	bool SettingsChange = false;
	
	if (CurrentResolution != Settings->GetScreenResolution())
	{
		
		Settings->SetScreenResolution(CurrentResolution);
		SettingsChange = true;
	}

	bool FullScreenTemp = Settings->GetFullscreenMode() == EWindowMode::Fullscreen;

	if (FullScreen != FullScreenTemp)
	{
		Settings->SetFullscreenMode(FullScreen ? EWindowMode::Fullscreen : EWindowMode::Windowed);
		SettingsChange = true;
	}
	
	if (SettingsChange)
	{
		Settings->ApplyResolutionSettings(false);
		Settings->SaveSettings();
		return true;
	}
	else
	{
		return false;
	}
	
}


UGameUserSettings* FGameSettings::GetGameUserSettings()
{
	if (GEngine != nullptr)
	{
		return GEngine->GameUserSettings;
	}
	return nullptr;
}


FIntPoint FGameSettings::GetResolutionFromString(FString Resolution)
{
	FIntPoint Result;
	int32 XPosition;
	XPosition = Resolution.Find("x");
	
	Result.X = FCString::Atoi(*Resolution.Left(XPosition));
	Result.Y = FCString::Atoi(*Resolution.RightChop(XPosition + 1));

	return Result;
}


bool FGameSettings::GetNotVideoSettings()
{
	/*
	bool GetString(
	const TCHAR* Section,
	const TCHAR* Key,
	FString& Value,
	const FString& Filename
	);
	*/

	if (!GConfig) return false;
	
	FString Section = "TFCP.NotVideoSettings";
	
	if (!GConfig->GetFloat(*Section, TEXT("MouseSensitive"), MouseSensitive, GGameIni)) return false;

	if (!GConfig->GetFloat(*Section, TEXT("RadarDeep"), RadarDeep, GGameIni)) return false;

	if (!GConfig->GetInt(*Section, TEXT("Language"), Language, GGameIni)) return false;

	if (!GConfig->GetInt(*Section, TEXT("SoundVolum"), SoundVolum, GGameIni)) return false;

	

	return true;
}

bool FGameSettings::GetNotResolutionSettings()
{
	FString Section = "TFCP.NotResolutionSettings";

	if (!GConfig) return false;

	if (!GConfig->GetInt(*Section, TEXT("AntiAliasing"), AntiAliasing, GGameIni)) return false;

	if (!GConfig->GetInt(*Section, TEXT("EffectsQuality"), EffectsQuality, GGameIni)) return false;

	if (!GConfig->GetInt(*Section, TEXT("PostProcess"), PostProcess, GGameIni)) return false;

	if (!GConfig->GetInt(*Section, TEXT("ShadowQuality"), ShadowQuality, GGameIni)) return false;

	if (!GConfig->GetInt(*Section, TEXT("TextureQuality"), TextureQuality, GGameIni)) return false;

	if (!GConfig->GetInt(*Section, TEXT("ViewDistanceQuality"), ViewDistanceQuality, GGameIni)) return false;

	if (!GConfig->GetBool(*Section, TEXT("VSync"), VSync, GGameIni)) return false;

	return true;
}

bool FGameSettings::SaveNotVideoSettings()
{
	if (!GConfig) return false;
	

	//New Section to Add
	FString NewSection = "TFCP.NotVideoSettings";

	
	GConfig->SetFloat(*NewSection, TEXT("MouseSensitive"), MouseSensitive, GGameIni);

	GConfig->SetFloat(*NewSection, TEXT("RadarDeep"), RadarDeep, GGameIni);

	GConfig->SetInt(*NewSection, TEXT("Language"), Language, GGameIni);

	GConfig->SetInt(*NewSection, TEXT("SoundVolum"), SoundVolum, GGameIni);
	
	GConfig->Flush(false, GGameIni);

	

	return true;
}

bool FGameSettings::SaveNotResolutionSettings()
{
	if (!GConfig) return false;


	//New Section to Add
	FString NewSection = "TFCP.NotResolutionSettings";


	GConfig->SetInt(*NewSection, TEXT("AntiAliasing"), AntiAliasing, GGameIni);

	GConfig->SetInt(*NewSection, TEXT("EffectsQuality"), EffectsQuality, GGameIni);

	GConfig->SetInt(*NewSection, TEXT("PostProcess"), PostProcess, GGameIni);

	GConfig->SetInt(*NewSection, TEXT("ShadowQuality"), ShadowQuality, GGameIni);

	GConfig->SetInt(*NewSection, TEXT("TextureQuality"), TextureQuality, GGameIni);

	GConfig->SetInt(*NewSection, TEXT("ViewDistanceQuality"), ViewDistanceQuality, GGameIni);

	GConfig->SetBool(*NewSection, TEXT("VSync"), VSync, GGameIni);


	GConfig->Flush(false, GGameIni);



	return true;
}



void FGameSettings::SetNotVideoSettings()
{
	SoundVolumeChange(HUD->SoundClass, SoundVolum);

	ChangeLocalization((ELanguage)Language);
	UGameInstance* GameInstLoc = HUD->GetWorld()->GetGameInstance();
	if (GameInstLoc)
	{
		UMainMenuGameInstance* GameInst = Cast<UMainMenuGameInstance>(GameInstLoc);

		if (GameInst && ShowFPS != GameInst->CurrentShowFPS)
		{
			HUD->GetWorld()->GetFirstPlayerController()->ConsoleCommand(TEXT("Stat FPS"), false);
			GameInst->CurrentShowFPS = ShowFPS;
		}
	}
	
	

	SaveNotVideoSettings();
}

bool  FGameSettings::SoundVolumeChange(USoundClass* SoundClassObject, float NewVolume)
{
	if (!SoundClassObject)
	{
		return false;
	}

	SoundClassObject->Properties.Volume = NewVolume;
	return true;
}

void  FGameSettings::ChangeLocalization(ELanguage Language)
{
	FInternationalization::Get().SetCurrentCulture(ELanguageGetString(Language));
}

ELanguage  FGameSettings::GetDefayltLocalization()
{
	FCultureRef CultRef = FInternationalization::Get().GetDefaultLanguage();
	
	return ELanguageFromString(CultRef->GetName());
}

