// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MainMenuPluginButtons.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuPluginButtons() {}
// Cross Module References
	MAINMENUPLUGINRUNTIME_API UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuPluginButtonType();
	UPackage* Z_Construct_UPackage__Script_MainMenuPluginRuntime();
// End Cross Module References
	static UEnum* EMainMenuPluginButtonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuPluginButtonType, Z_Construct_UPackage__Script_MainMenuPluginRuntime(), TEXT("EMainMenuPluginButtonType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMainMenuPluginButtonType(EMainMenuPluginButtonType_StaticEnum, TEXT("/Script/MainMenuPluginRuntime"), TEXT("EMainMenuPluginButtonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuPluginButtonType_CRC() { return 2604593752U; }
	UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuPluginButtonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MainMenuPluginRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMainMenuPluginButtonType"), 0, Get_Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuPluginButtonType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMainMenuPluginButtonType::Exit", (int64)EMainMenuPluginButtonType::Exit },
				{ "EMainMenuPluginButtonType::FreeRace", (int64)EMainMenuPluginButtonType::FreeRace },
				{ "EMainMenuPluginButtonType::CheckPointMode", (int64)EMainMenuPluginButtonType::CheckPointMode },
				{ "EMainMenuPluginButtonType::Settings", (int64)EMainMenuPluginButtonType::Settings },
				{ "EMainMenuPluginButtonType::OK", (int64)EMainMenuPluginButtonType::OK },
				{ "EMainMenuPluginButtonType::Cancel", (int64)EMainMenuPluginButtonType::Cancel },
				{ "EMainMenuPluginButtonType::Apply", (int64)EMainMenuPluginButtonType::Apply },
				{ "EMainMenuPluginButtonType::Resume", (int64)EMainMenuPluginButtonType::Resume },
				{ "EMainMenuPluginButtonType::Delete", (int64)EMainMenuPluginButtonType::Delete },
				{ "EMainMenuPluginButtonType::NewRace", (int64)EMainMenuPluginButtonType::NewRace },
				{ "EMainMenuPluginButtonType::MainMenu", (int64)EMainMenuPluginButtonType::MainMenu },
				{ "EMainMenuPluginButtonType::Load", (int64)EMainMenuPluginButtonType::Load },
				{ "EMainMenuPluginButtonType::RepeatRace", (int64)EMainMenuPluginButtonType::RepeatRace },
				{ "EMainMenuPluginButtonType::KeyBind", (int64)EMainMenuPluginButtonType::KeyBind },
				{ "EMainMenuPluginButtonType::DefaultKeys", (int64)EMainMenuPluginButtonType::DefaultKeys },
				{ "EMainMenuPluginButtonType::Titles", (int64)EMainMenuPluginButtonType::Titles },
				{ "EMainMenuPluginButtonType::Back", (int64)EMainMenuPluginButtonType::Back },
				{ "EMainMenuPluginButtonType::Restart", (int64)EMainMenuPluginButtonType::Restart },
				{ "EMainMenuPluginButtonType::Control", (int64)EMainMenuPluginButtonType::Control },
				{ "EMainMenuPluginButtonType::end", (int64)EMainMenuPluginButtonType::end },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MainMenuPluginButtons.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMainMenuPluginButtonType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMainMenuPluginButtonType",
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
