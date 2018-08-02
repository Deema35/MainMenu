// Copyright 2018 Pavlov Dmitriy
#include "MenuSettingsProperty.h"
#include "MainMenuPluginHUDComponent.h"

static_assert((int)EMenuSettingsIntPropertyType::end == 8, "Need update factory metod");

std::unique_ptr<FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>> EMenuSettingsIntPropertyTypeCreateInt(EMenuSettingsIntPropertyType PropertyType, UMainMenuPluginHUDComponent* HUD)
{
	switch (PropertyType)
	{
	case EMenuSettingsIntPropertyType::AntiAliasing:

		return std::unique_ptr<FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>>(new FMenuSettingsPropertyAntiAliasing(HUD->GameSettings.AntiAliasing));

	case EMenuSettingsIntPropertyType::EffectsQuality:

		return std::unique_ptr<FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>>(new FMenuSettingsPropertyEffectsQuality(HUD->GameSettings.EffectsQuality));

	
	case EMenuSettingsIntPropertyType::PostProcessing:

		return std::unique_ptr<FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>>(new FMenuSettingsPropertyPostProcessing(HUD->GameSettings.PostProcess));


	case EMenuSettingsIntPropertyType::ShadowQuality:

		return std::unique_ptr<FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>>(new FMenuSettingsPropertyShadowQuality(HUD->GameSettings.ShadowQuality));


	case EMenuSettingsIntPropertyType::TextureQuality:

		return std::unique_ptr<FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>>(new FMenuSettingsPropertyTextureQuality(HUD->GameSettings.TextureQuality));

	case EMenuSettingsIntPropertyType::ViewDistanceQuality:

		return std::unique_ptr<FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>>(new FMenuSettingsPropertyViewDistanceQuality(HUD->GameSettings.ViewDistanceQuality));

	case EMenuSettingsIntPropertyType::Language:

		return std::unique_ptr<FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>>(new FMenuSettingsPropertyLanguage(HUD->GameSettings.Language));

	case EMenuSettingsIntPropertyType::SoundVolume:

		return std::unique_ptr<FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>>(new FMenuSettingsPropertySoundVolume(HUD->GameSettings.SoundVolum));

	default: throw;
	}
}

static_assert((int)EMenuSettingsBoolPropertyType::end == 3, "Need update factory metod");

std::unique_ptr<FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>> EMenuSettingsIntPropertyTypeCreateBool(EMenuSettingsBoolPropertyType PropertyType, UMainMenuPluginHUDComponent* HUD)
{
	switch (PropertyType)
	{
	case EMenuSettingsBoolPropertyType::FullScreen:

		return std::unique_ptr<FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>>(new FMenuSettingsPropertyFullScreen(HUD->GameSettings.FullScreen));

	
	case EMenuSettingsBoolPropertyType::VSync:

		return std::unique_ptr<FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>>(new FMenuSettingsPropertyVSync(HUD->GameSettings.VSync));

	case EMenuSettingsBoolPropertyType::ShowFPS:

		return std::unique_ptr<FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>>(new FMenuSettingsPropertyShowFPS(HUD->GameSettings.ShowFPS));

	default: throw;
	}
}

static_assert((int)EMenuSettingsFloatPropertyType::end == 2, "Need update factory metod");

std::unique_ptr<FMenuSettingsPropertyBase<float, EMenuSettingsFloatPropertyType>> EMenuSettingsIntPropertyTypeCreateFloat(EMenuSettingsFloatPropertyType PropertyType, UMainMenuPluginHUDComponent* HUD)
{
	switch (PropertyType)
	{
	
	case EMenuSettingsFloatPropertyType::MouseSensitive:

		return std::unique_ptr<FMenuSettingsPropertyBase<float, EMenuSettingsFloatPropertyType>>(new FMenuSettingsPropertyMouseSensitive(HUD->GameSettings.MouseSensitive));


	case EMenuSettingsFloatPropertyType::RadarDeep:

		return std::unique_ptr<FMenuSettingsPropertyBase<float, EMenuSettingsFloatPropertyType>>(new FMenuSettingsPropertyRadarDeep(HUD->GameSettings.RadarDeep));


	default: throw;
	}
}


