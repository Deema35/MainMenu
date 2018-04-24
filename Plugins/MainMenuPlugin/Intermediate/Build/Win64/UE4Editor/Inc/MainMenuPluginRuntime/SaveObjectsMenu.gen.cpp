// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SaveObjectsMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveObjectsMenu() {}
// Cross Module References
	MAINMENUPLUGINRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveObjectsMenu();
	UPackage* Z_Construct_UPackage__Script_MainMenuPluginRuntime();
	MAINMENUPLUGINRUNTIME_API UClass* Z_Construct_UClass_UMainMenuSaveObject_NoRegister();
	MAINMENUPLUGINRUNTIME_API UClass* Z_Construct_UClass_UMainMenuSaveObject();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FSaveObjectsMenu::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAINMENUPLUGINRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSaveObjectsMenu_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveObjectsMenu, Z_Construct_UPackage__Script_MainMenuPluginRuntime(), TEXT("SaveObjectsMenu"), sizeof(FSaveObjectsMenu), Get_Z_Construct_UScriptStruct_FSaveObjectsMenu_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveObjectsMenu(FSaveObjectsMenu::StaticStruct, TEXT("/Script/MainMenuPluginRuntime"), TEXT("SaveObjectsMenu"), false, nullptr, nullptr);
static struct FScriptStruct_MainMenuPluginRuntime_StaticRegisterNativesFSaveObjectsMenu
{
	FScriptStruct_MainMenuPluginRuntime_StaticRegisterNativesFSaveObjectsMenu()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SaveObjectsMenu")),new UScriptStruct::TCppStructOps<FSaveObjectsMenu>);
	}
} ScriptStruct_MainMenuPluginRuntime_StaticRegisterNativesFSaveObjectsMenu;
	UScriptStruct* Z_Construct_UScriptStruct_FSaveObjectsMenu()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveObjectsMenu_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MainMenuPluginRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveObjectsMenu"), sizeof(FSaveObjectsMenu), Get_Z_Construct_UScriptStruct_FSaveObjectsMenu_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "SaveObjectsMenu.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveObjectsMenu>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedObjects_MetaData[] = {
				{ "ModuleRelativePath", "SaveObjectsMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SavedObjects = { UE4CodeGen_Private::EPropertyClass::Array, "SavedObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSaveObjectsMenu, SavedObjects), METADATA_PARAMS(NewProp_SavedObjects_MetaData, ARRAY_COUNT(NewProp_SavedObjects_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SavedObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SavedObjects", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMainMenuSaveObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SavedObjects,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SavedObjects_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SaveObjectsMenu",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSaveObjectsMenu),
				alignof(FSaveObjectsMenu),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveObjectsMenu_CRC() { return 2683004714U; }
	void UMainMenuSaveObject::StaticRegisterNativesUMainMenuSaveObject()
	{
	}
	UClass* Z_Construct_UClass_UMainMenuSaveObject_NoRegister()
	{
		return UMainMenuSaveObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UMainMenuSaveObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USaveGame,
				(UObject* (*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SaveObjectsMenu.h" },
				{ "ModuleRelativePath", "SaveObjectsMenu.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDate_MetaData[] = {
				{ "Category", "MainMenuSaveObject" },
				{ "ModuleRelativePath", "SaveObjectsMenu.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastDate = { UE4CodeGen_Private::EPropertyClass::Struct, "LastDate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMainMenuSaveObject, LastDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(NewProp_LastDate_MetaData, ARRAY_COUNT(NewProp_LastDate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastDate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMainMenuSaveObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMainMenuSaveObject::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenuSaveObject, 655622390);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenuSaveObject(Z_Construct_UClass_UMainMenuSaveObject, &UMainMenuSaveObject::StaticClass, TEXT("/Script/MainMenuPluginRuntime"), TEXT("UMainMenuSaveObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuSaveObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
