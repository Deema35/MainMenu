// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSettings() {}
// Cross Module References
	MAINMENUPLUGINRUNTIME_API UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_ELanguage();
	UPackage* Z_Construct_UPackage__Script_MainMenuPluginRuntime();
	MAINMENUPLUGINRUNTIME_API UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EQualityLevels();
	MAINMENUPLUGINRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGameSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	static UEnum* ELanguage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MainMenuPluginRuntime_ELanguage, Z_Construct_UPackage__Script_MainMenuPluginRuntime(), TEXT("ELanguage"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELanguage(ELanguage_StaticEnum, TEXT("/Script/MainMenuPluginRuntime"), TEXT("ELanguage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MainMenuPluginRuntime_ELanguage_CRC() { return 3677946251U; }
	UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_ELanguage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MainMenuPluginRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELanguage"), 0, Get_Z_Construct_UEnum_MainMenuPluginRuntime_ELanguage_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELanguage::Russian", (int64)ELanguage::Russian },
				{ "ELanguage::English", (int64)ELanguage::English },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELanguage",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELanguage",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EQualityLevels_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MainMenuPluginRuntime_EQualityLevels, Z_Construct_UPackage__Script_MainMenuPluginRuntime(), TEXT("EQualityLevels"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQualityLevels(EQualityLevels_StaticEnum, TEXT("/Script/MainMenuPluginRuntime"), TEXT("EQualityLevels"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MainMenuPluginRuntime_EQualityLevels_CRC() { return 2069814076U; }
	UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EQualityLevels()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MainMenuPluginRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQualityLevels"), 0, Get_Z_Construct_UEnum_MainMenuPluginRuntime_EQualityLevels_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQualityLevels::Low", (int64)EQualityLevels::Low },
				{ "EQualityLevels::Medium", (int64)EQualityLevels::Medium },
				{ "EQualityLevels::Hight", (int64)EQualityLevels::Hight },
				{ "EQualityLevels::Epic", (int64)EQualityLevels::Epic },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EQualityLevels",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EQualityLevels",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGameSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAINMENUPLUGINRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FGameSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameSettings, Z_Construct_UPackage__Script_MainMenuPluginRuntime(), TEXT("GameSettings"), sizeof(FGameSettings), Get_Z_Construct_UScriptStruct_FGameSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameSettings(FGameSettings::StaticStruct, TEXT("/Script/MainMenuPluginRuntime"), TEXT("GameSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MainMenuPluginRuntime_StaticRegisterNativesFGameSettings
{
	FScriptStruct_MainMenuPluginRuntime_StaticRegisterNativesFGameSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameSettings")),new UScriptStruct::TCppStructOps<FGameSettings>);
	}
} ScriptStruct_MainMenuPluginRuntime_StaticRegisterNativesFGameSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FGameSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MainMenuPluginRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameSettings"), sizeof(FGameSettings), Get_Z_Construct_UScriptStruct_FGameSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameSettings>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundVolum_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SoundVolum = { UE4CodeGen_Private::EPropertyClass::Int, "SoundVolum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameSettings, SoundVolum), METADATA_PARAMS(NewProp_SoundVolum_MetaData, ARRAY_COUNT(NewProp_SoundVolum_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Language = { UE4CodeGen_Private::EPropertyClass::Int, "Language", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameSettings, Language), METADATA_PARAMS(NewProp_Language_MetaData, ARRAY_COUNT(NewProp_Language_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadarDeep_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadarDeep = { UE4CodeGen_Private::EPropertyClass::Float, "RadarDeep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameSettings, RadarDeep), METADATA_PARAMS(NewProp_RadarDeep_MetaData, ARRAY_COUNT(NewProp_RadarDeep_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSensitive_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSensitive = { UE4CodeGen_Private::EPropertyClass::Float, "MouseSensitive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameSettings, MouseSensitive), METADATA_PARAMS(NewProp_MouseSensitive_MetaData, ARRAY_COUNT(NewProp_MouseSensitive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowFPS_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			auto NewProp_ShowFPS_SetBit = [](void* Obj){ ((FGameSettings*)Obj)->ShowFPS = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowFPS = { UE4CodeGen_Private::EPropertyClass::Bool, "ShowFPS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGameSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ShowFPS_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ShowFPS_MetaData, ARRAY_COUNT(NewProp_ShowFPS_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VSync_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			auto NewProp_VSync_SetBit = [](void* Obj){ ((FGameSettings*)Obj)->VSync = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VSync = { UE4CodeGen_Private::EPropertyClass::Bool, "VSync", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGameSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_VSync_SetBit)>::SetBit, METADATA_PARAMS(NewProp_VSync_MetaData, ARRAY_COUNT(NewProp_VSync_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullScreen_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			auto NewProp_FullScreen_SetBit = [](void* Obj){ ((FGameSettings*)Obj)->FullScreen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FullScreen = { UE4CodeGen_Private::EPropertyClass::Bool, "FullScreen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGameSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_FullScreen_SetBit)>::SetBit, METADATA_PARAMS(NewProp_FullScreen_MetaData, ARRAY_COUNT(NewProp_FullScreen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDistanceQuality_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewDistanceQuality = { UE4CodeGen_Private::EPropertyClass::Int, "ViewDistanceQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameSettings, ViewDistanceQuality), METADATA_PARAMS(NewProp_ViewDistanceQuality_MetaData, ARRAY_COUNT(NewProp_ViewDistanceQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureQuality_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureQuality = { UE4CodeGen_Private::EPropertyClass::Int, "TextureQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameSettings, TextureQuality), METADATA_PARAMS(NewProp_TextureQuality_MetaData, ARRAY_COUNT(NewProp_TextureQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowQuality_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShadowQuality = { UE4CodeGen_Private::EPropertyClass::Int, "ShadowQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameSettings, ShadowQuality), METADATA_PARAMS(NewProp_ShadowQuality_MetaData, ARRAY_COUNT(NewProp_ShadowQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcess_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PostProcess = { UE4CodeGen_Private::EPropertyClass::Int, "PostProcess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameSettings, PostProcess), METADATA_PARAMS(NewProp_PostProcess_MetaData, ARRAY_COUNT(NewProp_PostProcess_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectsQuality_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EffectsQuality = { UE4CodeGen_Private::EPropertyClass::Int, "EffectsQuality", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameSettings, EffectsQuality), METADATA_PARAMS(NewProp_EffectsQuality_MetaData, ARRAY_COUNT(NewProp_EffectsQuality_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiAliasing_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AntiAliasing = { UE4CodeGen_Private::EPropertyClass::Int, "AntiAliasing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameSettings, AntiAliasing), METADATA_PARAMS(NewProp_AntiAliasing_MetaData, ARRAY_COUNT(NewProp_AntiAliasing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentResolution_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentResolution = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameSettings, CurrentResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_CurrentResolution_MetaData, ARRAY_COUNT(NewProp_CurrentResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionList_MetaData[] = {
				{ "Category", "GameSettings" },
				{ "ModuleRelativePath", "GameSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResolutionList = { UE4CodeGen_Private::EPropertyClass::Array, "ResolutionList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGameSettings, ResolutionList), METADATA_PARAMS(NewProp_ResolutionList_MetaData, ARRAY_COUNT(NewProp_ResolutionList_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResolutionList_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ResolutionList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundVolum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Language,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadarDeep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MouseSensitive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowFPS,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VSync,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullScreen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViewDistanceQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostProcess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectsQuality,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AntiAliasing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResolutionList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResolutionList_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GameSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGameSettings),
				alignof(FGameSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameSettings_CRC() { return 4098888680U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
