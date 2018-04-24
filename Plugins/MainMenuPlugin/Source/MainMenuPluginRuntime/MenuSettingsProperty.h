// Copyright 2018 Pavlov Dmitriy
#pragma once
#include "CoreMinimal.h"
#include "UObject/Class.h"  //For UENUM

#define LOCTEXT_NAMESPACE "MainMenuPlugin"

class AMainMenuPluginHUD;



UENUM(BlueprintType)
enum class EMenuSettingsIntPropertyType : uint8
{
	AntiAliasing,
	EffectsQuality,
	PostProcessing,
	ShadowQuality,
	TextureQuality,
	ViewDistanceQuality, 
	Language,
	SoundVolume,
	end
};

UENUM(BlueprintType)
enum class EMenuSettingsBoolPropertyType : uint8
{
	FullScreen,
	VSync,
	ShowFPS,
	end
};

UENUM(BlueprintType)
enum class EMenuSettingsFloatPropertyType : uint8
{
	MouseSensitive,
	RadarDeep,
	end
};

template<typename T, typename ID> class FMenuSettingsPropertyBase;

FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>* EMenuSettingsIntPropertyTypeCreateInt(EMenuSettingsIntPropertyType PropertyType, AMainMenuPluginHUD* HUD);

FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>* EMenuSettingsIntPropertyTypeCreateBool(EMenuSettingsBoolPropertyType PropertyType, AMainMenuPluginHUD* HUD);

FMenuSettingsPropertyBase<float, EMenuSettingsFloatPropertyType>* EMenuSettingsIntPropertyTypeCreateFloat(EMenuSettingsFloatPropertyType PropertyType, AMainMenuPluginHUD* HUD);





template<typename T, typename ID>
class FMenuSettingsPropertyBase
{
public:
	FMenuSettingsPropertyBase(T& _Property) : Property(_Property) {}

	virtual ~FMenuSettingsPropertyBase() {}

	virtual ID GetType() const = 0;

	void SetProperty(T NewProperty) { Property = NewProperty; }

	virtual FText GetPropertyName() const = 0;

	T GetProperty() const { return Property; }

protected:

	T & Property;
};




class FMenuSettingsPropertyAntiAliasing : public FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>
{
public:
	FMenuSettingsPropertyAntiAliasing(int32& Property) : FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>(Property) {}

	virtual EMenuSettingsIntPropertyType GetType() const override { return EMenuSettingsIntPropertyType::AntiAliasing; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("AntiAliasing", "Antialiasing"); }

};

class FMenuSettingsPropertyEffectsQuality : public FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>
{
public:
	FMenuSettingsPropertyEffectsQuality(int32& Property) : FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>(Property) {}

	virtual EMenuSettingsIntPropertyType GetType() const override { return EMenuSettingsIntPropertyType::EffectsQuality; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("EffectsQuality", "Effects quality"); }

};

class FMenuSettingsPropertyPostProcessing : public FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>
{
public:
	FMenuSettingsPropertyPostProcessing(int32& Property) : FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>(Property) {}

	virtual EMenuSettingsIntPropertyType GetType() const override { return EMenuSettingsIntPropertyType::PostProcessing; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("PostProcessing", "Postprocessing"); }

};

class FMenuSettingsPropertyShadowQuality : public FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>
{
public:
	FMenuSettingsPropertyShadowQuality(int32& Property) : FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>(Property) {}

	virtual EMenuSettingsIntPropertyType GetType() const override { return EMenuSettingsIntPropertyType::ShadowQuality; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("ShadowQuality", "Shadows quality"); }

};

class FMenuSettingsPropertyTextureQuality : public FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>
{
public:
	FMenuSettingsPropertyTextureQuality(int32& Property) : FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>(Property) {}

	virtual EMenuSettingsIntPropertyType GetType() const override { return EMenuSettingsIntPropertyType::EffectsQuality; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("TextureQuality", "Texture quality"); }

};

class FMenuSettingsPropertyViewDistanceQuality : public FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>
{
public:
	FMenuSettingsPropertyViewDistanceQuality(int32& Property) : FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>(Property) {}

	virtual EMenuSettingsIntPropertyType GetType() const override { return EMenuSettingsIntPropertyType::EffectsQuality; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("ViewDistanceQuality", "View distance quality"); }

};

class FMenuSettingsPropertyFullScreen : public FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>
{
public:
	FMenuSettingsPropertyFullScreen(bool& Property) : FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>(Property) {}

	virtual EMenuSettingsBoolPropertyType GetType() const override { return EMenuSettingsBoolPropertyType::FullScreen; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("FullScreen", "Full screen"); }

};

class FMenuSettingsPropertyVSync : public FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>
{
public:
	FMenuSettingsPropertyVSync(bool& Property) : FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>(Property) {}

	virtual EMenuSettingsBoolPropertyType GetType() const override { return EMenuSettingsBoolPropertyType::VSync; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("VSync", "VSync"); }

};

class FMenuSettingsPropertyShowFPS : public FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>
{
public:
	FMenuSettingsPropertyShowFPS(bool& Property) : FMenuSettingsPropertyBase<bool, EMenuSettingsBoolPropertyType>(Property) {}

	virtual EMenuSettingsBoolPropertyType GetType() const override { return EMenuSettingsBoolPropertyType::ShowFPS; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("ShowFPS", "Show FPS"); }

};

class FMenuSettingsPropertyMouseSensitive : public FMenuSettingsPropertyBase<float, EMenuSettingsFloatPropertyType>
{
public:
	FMenuSettingsPropertyMouseSensitive(float& Property) : FMenuSettingsPropertyBase<float, EMenuSettingsFloatPropertyType>(Property) {}

	virtual EMenuSettingsFloatPropertyType GetType() const override { return EMenuSettingsFloatPropertyType::MouseSensitive; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("MouseSensitive", "Mouse sensitive"); }

};

class FMenuSettingsPropertyRadarDeep : public FMenuSettingsPropertyBase<float, EMenuSettingsFloatPropertyType>
{
public:
	FMenuSettingsPropertyRadarDeep(float& Property) : FMenuSettingsPropertyBase<float, EMenuSettingsFloatPropertyType>(Property) {}

	virtual EMenuSettingsFloatPropertyType GetType() const override { return EMenuSettingsFloatPropertyType::RadarDeep; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("RadarDeep", "Radar deep"); }

};

class FMenuSettingsPropertyLanguage : public FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>
{
public:
	FMenuSettingsPropertyLanguage(int32& Property) : FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>(Property) {}

	virtual EMenuSettingsIntPropertyType GetType() const override { return EMenuSettingsIntPropertyType::Language; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("Language", "Language"); }

};

class FMenuSettingsPropertySoundVolume : public FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>
{
public:
	FMenuSettingsPropertySoundVolume(int32& Property) : FMenuSettingsPropertyBase<int32, EMenuSettingsIntPropertyType>(Property) {}

	virtual EMenuSettingsIntPropertyType GetType() const override { return EMenuSettingsIntPropertyType::Language; }

	virtual FText GetPropertyName() const override { return  LOCTEXT("SoundVolume", "Sound volume"); }

};

#undef LOCTEXT_NAMESPACE 