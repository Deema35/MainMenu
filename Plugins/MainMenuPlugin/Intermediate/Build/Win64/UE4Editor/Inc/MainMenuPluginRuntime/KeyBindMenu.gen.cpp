// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "KeyBindMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyBindMenu() {}
// Cross Module References
	MAINMENUPLUGINRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FKeyBindMenu();
	UPackage* Z_Construct_UPackage__Script_MainMenuPluginRuntime();
// End Cross Module References
class UScriptStruct* FKeyBindMenu::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAINMENUPLUGINRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FKeyBindMenu_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyBindMenu, Z_Construct_UPackage__Script_MainMenuPluginRuntime(), TEXT("KeyBindMenu"), sizeof(FKeyBindMenu), Get_Z_Construct_UScriptStruct_FKeyBindMenu_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyBindMenu(FKeyBindMenu::StaticStruct, TEXT("/Script/MainMenuPluginRuntime"), TEXT("KeyBindMenu"), false, nullptr, nullptr);
static struct FScriptStruct_MainMenuPluginRuntime_StaticRegisterNativesFKeyBindMenu
{
	FScriptStruct_MainMenuPluginRuntime_StaticRegisterNativesFKeyBindMenu()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KeyBindMenu")),new UScriptStruct::TCppStructOps<FKeyBindMenu>);
	}
} ScriptStruct_MainMenuPluginRuntime_StaticRegisterNativesFKeyBindMenu;
	UScriptStruct* Z_Construct_UScriptStruct_FKeyBindMenu()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyBindMenu_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MainMenuPluginRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyBindMenu"), sizeof(FKeyBindMenu), Get_Z_Construct_UScriptStruct_FKeyBindMenu_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeyBindMenu.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyBindMenu>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"KeyBindMenu",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FKeyBindMenu),
				alignof(FKeyBindMenu),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyBindMenu_CRC() { return 3848207661U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
