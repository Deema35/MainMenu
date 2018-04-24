// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MenuSettingsProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuSettingsProperty() {}
// Cross Module References
	MAINMENUPLUGINRUNTIME_API UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsFloatPropertyType();
	UPackage* Z_Construct_UPackage__Script_MainMenuPluginRuntime();
	MAINMENUPLUGINRUNTIME_API UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsBoolPropertyType();
	MAINMENUPLUGINRUNTIME_API UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsIntPropertyType();
// End Cross Module References
	static UEnum* EMenuSettingsFloatPropertyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsFloatPropertyType, Z_Construct_UPackage__Script_MainMenuPluginRuntime(), TEXT("EMenuSettingsFloatPropertyType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMenuSettingsFloatPropertyType(EMenuSettingsFloatPropertyType_StaticEnum, TEXT("/Script/MainMenuPluginRuntime"), TEXT("EMenuSettingsFloatPropertyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsFloatPropertyType_CRC() { return 3891061817U; }
	UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsFloatPropertyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MainMenuPluginRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMenuSettingsFloatPropertyType"), 0, Get_Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsFloatPropertyType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMenuSettingsFloatPropertyType::MouseSensitive", (int64)EMenuSettingsFloatPropertyType::MouseSensitive },
				{ "EMenuSettingsFloatPropertyType::RadarDeep", (int64)EMenuSettingsFloatPropertyType::RadarDeep },
				{ "EMenuSettingsFloatPropertyType::end", (int64)EMenuSettingsFloatPropertyType::end },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MenuSettingsProperty.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMenuSettingsFloatPropertyType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMenuSettingsFloatPropertyType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMenuSettingsBoolPropertyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsBoolPropertyType, Z_Construct_UPackage__Script_MainMenuPluginRuntime(), TEXT("EMenuSettingsBoolPropertyType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMenuSettingsBoolPropertyType(EMenuSettingsBoolPropertyType_StaticEnum, TEXT("/Script/MainMenuPluginRuntime"), TEXT("EMenuSettingsBoolPropertyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsBoolPropertyType_CRC() { return 4288576961U; }
	UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsBoolPropertyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MainMenuPluginRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMenuSettingsBoolPropertyType"), 0, Get_Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsBoolPropertyType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMenuSettingsBoolPropertyType::FullScreen", (int64)EMenuSettingsBoolPropertyType::FullScreen },
				{ "EMenuSettingsBoolPropertyType::VSync", (int64)EMenuSettingsBoolPropertyType::VSync },
				{ "EMenuSettingsBoolPropertyType::ShowFPS", (int64)EMenuSettingsBoolPropertyType::ShowFPS },
				{ "EMenuSettingsBoolPropertyType::end", (int64)EMenuSettingsBoolPropertyType::end },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MenuSettingsProperty.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMenuSettingsBoolPropertyType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMenuSettingsBoolPropertyType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMenuSettingsIntPropertyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsIntPropertyType, Z_Construct_UPackage__Script_MainMenuPluginRuntime(), TEXT("EMenuSettingsIntPropertyType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMenuSettingsIntPropertyType(EMenuSettingsIntPropertyType_StaticEnum, TEXT("/Script/MainMenuPluginRuntime"), TEXT("EMenuSettingsIntPropertyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsIntPropertyType_CRC() { return 3568651437U; }
	UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsIntPropertyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MainMenuPluginRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMenuSettingsIntPropertyType"), 0, Get_Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsIntPropertyType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMenuSettingsIntPropertyType::AntiAliasing", (int64)EMenuSettingsIntPropertyType::AntiAliasing },
				{ "EMenuSettingsIntPropertyType::EffectsQuality", (int64)EMenuSettingsIntPropertyType::EffectsQuality },
				{ "EMenuSettingsIntPropertyType::PostProcessing", (int64)EMenuSettingsIntPropertyType::PostProcessing },
				{ "EMenuSettingsIntPropertyType::ShadowQuality", (int64)EMenuSettingsIntPropertyType::ShadowQuality },
				{ "EMenuSettingsIntPropertyType::TextureQuality", (int64)EMenuSettingsIntPropertyType::TextureQuality },
				{ "EMenuSettingsIntPropertyType::ViewDistanceQuality", (int64)EMenuSettingsIntPropertyType::ViewDistanceQuality },
				{ "EMenuSettingsIntPropertyType::Language", (int64)EMenuSettingsIntPropertyType::Language },
				{ "EMenuSettingsIntPropertyType::SoundVolume", (int64)EMenuSettingsIntPropertyType::SoundVolume },
				{ "EMenuSettingsIntPropertyType::end", (int64)EMenuSettingsIntPropertyType::end },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MenuSettingsProperty.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMenuSettingsIntPropertyType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMenuSettingsIntPropertyType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
