// Copyright 2018 Pavlov Dmitriy
#include "MenuSettingsProperty.h"
#include "MainMenuPluginHUD.h"

static_assert((int)EMenuSettingsIntPropertyType::end == 8, "Need update factory metod");

FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>* EMenuSettingsIntPropertyTypeCreateInt(EMenuSettingsIntPropertyType PropertyType, AMainMenuPluginHUD* HUD)
{
	switch (PropertyType)
	{
	case EMenuSettingsIntPropertyType::AntiAliasing:

		return new FMenuSettingsPropertyAntiAliasing(HUD->GameSettings.AntiAliasing);

	case EMenuSettingsIntPropertyType::EffectsQuality:

		return new FMenuSettingsPropertyEffectsQuality(HUD->GameSettings.EffectsQuality);

	
	case EMenuSettingsIntPropertyType::PostProcessing:

		return new FMenuSettingsPropertyPostProcessing(HUD->GameSettings.PostProcess);


	case EMenuSettingsIntPropertyType::ShadowQuality:

		return new FMenuSettingsPropertyShadowQuality(HUD->GameSettings.ShadowQuality);


	case EMenuSettingsIntPropertyType::TextureQuality:

		return new FMenuSettingsPropertyTextureQuality(HUD->GameSettings.TextureQuality);

	case EMenuSettingsIntPropertyType::ViewDistanceQuality:

		return new FMenuSettingsPropertyViewDistanceQuality(HUD->GameSettings.ViewDistanceQuality);

	case EMenuSettingsIntPropertyType::Language:

		return new FMenuSettingsPropertyLanguage(HUD->GameSettings.Language);

	case EMenuSettingsIntPropertyType::SoundVolume:

		return new FMenuSettingsPropertySoundVolume(HUD->GameSettings.SoundVolum);

	default: throw;
	}
}

static_assert((int)EMenuSettingsBoolPropertyType::end == 3, "Need update factory metod");

FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>* EMenuSettingsIntPropertyTypeCreateBool(EMenuSettingsBoolPropertyType PropertyType, AMainMenuPluginHUD* HUD)
{
	switch (PropertyType)
	{
	case EMenuSettingsBoolPropertyType::FullScreen:

		return new FMenuSettingsPropertyFullScreen(HUD->GameSettings.FullScreen);

	
	case EMenuSettingsBoolPropertyType::VSync:

		return new FMenuSettingsPropertyVSync(HUD->GameSettings.VSync);

	case EMenuSettingsBoolPropertyType::ShowFPS:

		return new FMenuSettingsPropertyShowFPS(HUD->GameSettings.ShowFPS);

	default: throw;
	}
}

static_assert((int)EMenuSettingsFloatPropertyType::end == 2, "Need update factory metod");

FMenuSettingsPropertyBase<float, EMenuSettingsFloatPropertyType>* EMenuSettingsIntPropertyTypeCreateFloat(EMenuSettingsFloatPropertyType PropertyType, AMainMenuPluginHUD* HUD)
{
	switch (PropertyType)
	{
	
	case EMenuSettingsFloatPropertyType::MouseSensitive:

		return new FMenuSettingsPropertyMouseSensitive(HUD->GameSettings.MouseSensitive);


	case EMenuSettingsFloatPropertyType::RadarDeep:

		return new FMenuSettingsPropertyRadarDeep(HUD->GameSettings.RadarDeep);


	default: throw;
	}
}


