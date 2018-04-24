// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MainMenuMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuMode() {}
// Cross Module References
	MAINMENUPLUGINRUNTIME_API UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuMode();
	UPackage* Z_Construct_UPackage__Script_MainMenuPluginRuntime();
// End Cross Module References
	static UEnum* EMainMenuMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuMode, Z_Construct_UPackage__Script_MainMenuPluginRuntime(), TEXT("EMainMenuMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMainMenuMode(EMainMenuMode_StaticEnum, TEXT("/Script/MainMenuPluginRuntime"), TEXT("EMainMenuMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuMode_CRC() { return 3317094466U; }
	UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MainMenuPluginRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMainMenuMode"), 0, Get_Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMainMenuMode::Game", (int64)EMainMenuMode::Game },
				{ "EMainMenuMode::MainMenu", (int64)EMainMenuMode::MainMenu },
				{ "EMainMenuMode::GameMenu", (int64)EMainMenuMode::GameMenu },
				{ "EMainMenuMode::Settings", (int64)EMainMenuMode::Settings },
				{ "EMainMenuMode::GameSettings", (int64)EMainMenuMode::GameSettings },
				{ "EMainMenuMode::MainMenuKeyBing", (int64)EMainMenuMode::MainMenuKeyBing },
				{ "EMainMenuMode::GameKeyBind", (int64)EMainMenuMode::GameKeyBind },
				{ "EMainMenuMode::TitlesMenu", (int64)EMainMenuMode::TitlesMenu },
				{ "EMainMenuMode::CheckPointModeTune", (int64)EMainMenuMode::CheckPointModeTune },
				{ "EMainMenuMode::CheckPointModeEnd", (int64)EMainMenuMode::CheckPointModeEnd },
				{ "EMainMenuMode::GameControl", (int64)EMainMenuMode::GameControl },
				{ "EMainMenuMode::MainMenuControl", (int64)EMainMenuMode::MainMenuControl },
				{ "EMainMenuMode::end", (int64)EMainMenuMode::end },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MainMenuMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMainMenuMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMainMenuMode",
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
