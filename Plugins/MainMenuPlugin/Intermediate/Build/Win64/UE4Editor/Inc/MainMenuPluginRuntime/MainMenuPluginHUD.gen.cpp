// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MainMenuPluginHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuPluginHUD() {}
// Cross Module References
	MAINMENUPLUGINRUNTIME_API UClass* Z_Construct_UClass_AMainMenuPluginHUD_NoRegister();
	MAINMENUPLUGINRUNTIME_API UClass* Z_Construct_UClass_AMainMenuPluginHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MainMenuPluginRuntime();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_ButtonClick();
	MAINMENUPLUGINRUNTIME_API UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuPluginButtonType();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_DateToStringRus();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_DateToTimeRus();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetButtonName();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetCurrentResolution();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetKeyBinding();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetKeyInput();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetMainMenuMode();
	MAINMENUPLUGINRUNTIME_API UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuMode();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetMouseKeyInput();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetMouseWheelInput();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyBool();
	MAINMENUPLUGINRUNTIME_API UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsBoolPropertyType();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyFloat();
	MAINMENUPLUGINRUNTIME_API UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsFloatPropertyType();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyInt();
	MAINMENUPLUGINRUNTIME_API UEnum* Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsIntPropertyType();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyNameBool();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyNameFloat();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyNameInt();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetResolutionList();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_SetCurrentResolution();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_SetKey();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_SetMainMenuMode();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_SetPropertyBool();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_SetPropertyFloat();
	MAINMENUPLUGINRUNTIME_API UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_SetPropertyInt();
	MAINMENUPLUGINRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGameSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void AMainMenuPluginHUD::StaticRegisterNativesAMainMenuPluginHUD()
	{
		UClass* Class = AMainMenuPluginHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ButtonClick", &AMainMenuPluginHUD::execButtonClick },
			{ "DateToStringRus", &AMainMenuPluginHUD::execDateToStringRus },
			{ "DateToTimeRus", &AMainMenuPluginHUD::execDateToTimeRus },
			{ "GetButtonName", &AMainMenuPluginHUD::execGetButtonName },
			{ "GetCurrentResolution", &AMainMenuPluginHUD::execGetCurrentResolution },
			{ "GetKeyBinding", &AMainMenuPluginHUD::execGetKeyBinding },
			{ "GetKeyInput", &AMainMenuPluginHUD::execGetKeyInput },
			{ "GetMainMenuMode", &AMainMenuPluginHUD::execGetMainMenuMode },
			{ "GetMouseKeyInput", &AMainMenuPluginHUD::execGetMouseKeyInput },
			{ "GetMouseWheelInput", &AMainMenuPluginHUD::execGetMouseWheelInput },
			{ "GetPropertyBool", &AMainMenuPluginHUD::execGetPropertyBool },
			{ "GetPropertyFloat", &AMainMenuPluginHUD::execGetPropertyFloat },
			{ "GetPropertyInt", &AMainMenuPluginHUD::execGetPropertyInt },
			{ "GetPropertyNameBool", &AMainMenuPluginHUD::execGetPropertyNameBool },
			{ "GetPropertyNameFloat", &AMainMenuPluginHUD::execGetPropertyNameFloat },
			{ "GetPropertyNameInt", &AMainMenuPluginHUD::execGetPropertyNameInt },
			{ "GetResolutionList", &AMainMenuPluginHUD::execGetResolutionList },
			{ "SetCurrentResolution", &AMainMenuPluginHUD::execSetCurrentResolution },
			{ "SetKey", &AMainMenuPluginHUD::execSetKey },
			{ "SetMainMenuMode", &AMainMenuPluginHUD::execSetMainMenuMode },
			{ "SetPropertyBool", &AMainMenuPluginHUD::execSetPropertyBool },
			{ "SetPropertyFloat", &AMainMenuPluginHUD::execSetPropertyFloat },
			{ "SetPropertyInt", &AMainMenuPluginHUD::execSetPropertyInt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_ButtonClick()
	{
		struct MainMenuPluginHUD_eventButtonClick_Parms
		{
			EMainMenuPluginButtonType ButtonType;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonType = { UE4CodeGen_Private::EPropertyClass::Enum, "ButtonType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventButtonClick_Parms, ButtonType), Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuPluginButtonType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "ButtonClick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MainMenuPluginHUD_eventButtonClick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_DateToStringRus()
	{
		struct MainMenuPluginHUD_eventDateToStringRus_Parms
		{
			FDateTime Date;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventDateToStringRus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Date = { UE4CodeGen_Private::EPropertyClass::Struct, "Date", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventDateToStringRus_Parms, Date), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Date,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "DateToStringRus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(MainMenuPluginHUD_eventDateToStringRus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_DateToTimeRus()
	{
		struct MainMenuPluginHUD_eventDateToTimeRus_Parms
		{
			FDateTime Date;
			FString Separator;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventDateToTimeRus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Separator = { UE4CodeGen_Private::EPropertyClass::Str, "Separator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventDateToTimeRus_Parms, Separator), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Date = { UE4CodeGen_Private::EPropertyClass::Struct, "Date", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventDateToTimeRus_Parms, Date), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Separator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Date,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "DateToTimeRus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(MainMenuPluginHUD_eventDateToTimeRus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetButtonName()
	{
		struct MainMenuPluginHUD_eventGetButtonName_Parms
		{
			EMainMenuPluginButtonType ButtonType;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetButtonName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonType = { UE4CodeGen_Private::EPropertyClass::Enum, "ButtonType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetButtonName_Parms, ButtonType), Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuPluginButtonType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetButtonName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MainMenuPluginHUD_eventGetButtonName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetCurrentResolution()
	{
		struct MainMenuPluginHUD_eventGetCurrentResolution_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetCurrentResolution_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetCurrentResolution", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MainMenuPluginHUD_eventGetCurrentResolution_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetKeyBinding()
	{
		struct MainMenuPluginHUD_eventGetKeyBinding_Parms
		{
			TArray<FInputActionKeyMapping> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetKeyBinding_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetKeyBinding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(MainMenuPluginHUD_eventGetKeyBinding_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetKeyInput()
	{
		struct MainMenuPluginHUD_eventGetKeyInput_Parms
		{
			FKeyEvent KeyEvent;
			FKey ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetKeyInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyEvent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyEvent = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetKeyInput_Parms, KeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(NewProp_KeyEvent_MetaData, ARRAY_COUNT(NewProp_KeyEvent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyEvent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetKeyInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(MainMenuPluginHUD_eventGetKeyInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetMainMenuMode()
	{
		struct MainMenuPluginHUD_eventGetMainMenuMode_Parms
		{
			EMainMenuMode ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetMainMenuMode_Parms, ReturnValue), Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetMainMenuMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MainMenuPluginHUD_eventGetMainMenuMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetMouseKeyInput()
	{
		struct MainMenuPluginHUD_eventGetMouseKeyInput_Parms
		{
			FPointerEvent PointerEvent;
			FKey ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetMouseKeyInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointerEvent = { UE4CodeGen_Private::EPropertyClass::Struct, "PointerEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetMouseKeyInput_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_PointerEvent_MetaData, ARRAY_COUNT(NewProp_PointerEvent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointerEvent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetMouseKeyInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(MainMenuPluginHUD_eventGetMouseKeyInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetMouseWheelInput()
	{
		struct MainMenuPluginHUD_eventGetMouseWheelInput_Parms
		{
			FPointerEvent PointerEvent;
			FKey ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetMouseWheelInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointerEvent = { UE4CodeGen_Private::EPropertyClass::Struct, "PointerEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetMouseWheelInput_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(NewProp_PointerEvent_MetaData, ARRAY_COUNT(NewProp_PointerEvent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointerEvent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetMouseWheelInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14420401, sizeof(MainMenuPluginHUD_eventGetMouseWheelInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyBool()
	{
		struct MainMenuPluginHUD_eventGetPropertyBool_Parms
		{
			EMenuSettingsBoolPropertyType PropertyType;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MainMenuPluginHUD_eventGetPropertyBool_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MainMenuPluginHUD_eventGetPropertyBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyType = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetPropertyBool_Parms, PropertyType), Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsBoolPropertyType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetPropertyBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MainMenuPluginHUD_eventGetPropertyBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyFloat()
	{
		struct MainMenuPluginHUD_eventGetPropertyFloat_Parms
		{
			EMenuSettingsFloatPropertyType PropertyType;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetPropertyFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyType = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetPropertyFloat_Parms, PropertyType), Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsFloatPropertyType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetPropertyFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MainMenuPluginHUD_eventGetPropertyFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyInt()
	{
		struct MainMenuPluginHUD_eventGetPropertyInt_Parms
		{
			EMenuSettingsIntPropertyType PropertyType;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetPropertyInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyType = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetPropertyInt_Parms, PropertyType), Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsIntPropertyType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetPropertyInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MainMenuPluginHUD_eventGetPropertyInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyNameBool()
	{
		struct MainMenuPluginHUD_eventGetPropertyNameBool_Parms
		{
			EMenuSettingsBoolPropertyType PropertyType;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetPropertyNameBool_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyType = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetPropertyNameBool_Parms, PropertyType), Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsBoolPropertyType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetPropertyNameBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MainMenuPluginHUD_eventGetPropertyNameBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyNameFloat()
	{
		struct MainMenuPluginHUD_eventGetPropertyNameFloat_Parms
		{
			EMenuSettingsFloatPropertyType PropertyType;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetPropertyNameFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyType = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetPropertyNameFloat_Parms, PropertyType), Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsFloatPropertyType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetPropertyNameFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MainMenuPluginHUD_eventGetPropertyNameFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyNameInt()
	{
		struct MainMenuPluginHUD_eventGetPropertyNameInt_Parms
		{
			EMenuSettingsIntPropertyType PropertyType;
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetPropertyNameInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyType = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetPropertyNameInt_Parms, PropertyType), Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsIntPropertyType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetPropertyNameInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MainMenuPluginHUD_eventGetPropertyNameInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_GetResolutionList()
	{
		struct MainMenuPluginHUD_eventGetResolutionList_Parms
		{
			TArray<FString> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000582, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventGetResolutionList_Parms, ReturnValue), METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "GetResolutionList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MainMenuPluginHUD_eventGetResolutionList_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_SetCurrentResolution()
	{
		struct MainMenuPluginHUD_eventSetCurrentResolution_Parms
		{
			FString Resolution;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Resolution = { UE4CodeGen_Private::EPropertyClass::Str, "Resolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventSetCurrentResolution_Parms, Resolution), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Resolution,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "SetCurrentResolution", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MainMenuPluginHUD_eventSetCurrentResolution_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_SetKey()
	{
		struct MainMenuPluginHUD_eventSetKey_Parms
		{
			FKey Key;
			int32 KeyNum;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MainMenuPluginHUD_eventSetKey_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MainMenuPluginHUD_eventSetKey_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_KeyNum = { UE4CodeGen_Private::EPropertyClass::Int, "KeyNum", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventSetKey_Parms, KeyNum), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventSetKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyNum,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "SetKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MainMenuPluginHUD_eventSetKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_SetMainMenuMode()
	{
		struct MainMenuPluginHUD_eventSetMainMenuMode_Parms
		{
			EMainMenuMode NewMode;
			bool WithoutCheck;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_WithoutCheck_SetBit = [](void* Obj){ ((MainMenuPluginHUD_eventSetMainMenuMode_Parms*)Obj)->WithoutCheck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithoutCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "WithoutCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MainMenuPluginHUD_eventSetMainMenuMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_WithoutCheck_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMode = { UE4CodeGen_Private::EPropertyClass::Enum, "NewMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventSetMainMenuMode_Parms, NewMode), Z_Construct_UEnum_MainMenuPluginRuntime_EMainMenuMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WithoutCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMode_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "CPP_Default_WithoutCheck", "false" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "SetMainMenuMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MainMenuPluginHUD_eventSetMainMenuMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_SetPropertyBool()
	{
		struct MainMenuPluginHUD_eventSetPropertyBool_Parms
		{
			EMenuSettingsBoolPropertyType PropertyType;
			bool Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_Value_SetBit = [](void* Obj){ ((MainMenuPluginHUD_eventSetPropertyBool_Parms*)Obj)->Value = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Bool, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MainMenuPluginHUD_eventSetPropertyBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Value_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyType = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventSetPropertyBool_Parms, PropertyType), Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsBoolPropertyType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "SetPropertyBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MainMenuPluginHUD_eventSetPropertyBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_SetPropertyFloat()
	{
		struct MainMenuPluginHUD_eventSetPropertyFloat_Parms
		{
			EMenuSettingsFloatPropertyType PropertyType;
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventSetPropertyFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyType = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventSetPropertyFloat_Parms, PropertyType), Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsFloatPropertyType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "SetPropertyFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MainMenuPluginHUD_eventSetPropertyFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMainMenuPluginHUD_SetPropertyInt()
	{
		struct MainMenuPluginHUD_eventSetPropertyInt_Parms
		{
			EMenuSettingsIntPropertyType PropertyType;
			int32 Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventSetPropertyInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyType = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MainMenuPluginHUD_eventSetPropertyInt_Parms, PropertyType), Z_Construct_UEnum_MainMenuPluginRuntime_EMenuSettingsIntPropertyType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MainMenuPlugin" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainMenuPluginHUD, "SetPropertyInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MainMenuPluginHUD_eventSetPropertyInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainMenuPluginHUD_NoRegister()
	{
		return AMainMenuPluginHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AMainMenuPluginHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_ButtonClick, "ButtonClick" }, // 721308397
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_DateToStringRus, "DateToStringRus" }, // 1452189754
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_DateToTimeRus, "DateToTimeRus" }, // 3756955823
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetButtonName, "GetButtonName" }, // 3905072304
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetCurrentResolution, "GetCurrentResolution" }, // 3392192099
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetKeyBinding, "GetKeyBinding" }, // 334246475
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetKeyInput, "GetKeyInput" }, // 439328243
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetMainMenuMode, "GetMainMenuMode" }, // 25100009
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetMouseKeyInput, "GetMouseKeyInput" }, // 3051594891
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetMouseWheelInput, "GetMouseWheelInput" }, // 2756038163
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyBool, "GetPropertyBool" }, // 949889243
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyFloat, "GetPropertyFloat" }, // 478476642
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyInt, "GetPropertyInt" }, // 2416589429
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyNameBool, "GetPropertyNameBool" }, // 1522766700
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyNameFloat, "GetPropertyNameFloat" }, // 337124112
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetPropertyNameInt, "GetPropertyNameInt" }, // 3099728312
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_GetResolutionList, "GetResolutionList" }, // 3475176094
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_SetCurrentResolution, "SetCurrentResolution" }, // 484712931
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_SetKey, "SetKey" }, // 4052502219
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_SetMainMenuMode, "SetMainMenuMode" }, // 2031736381
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_SetPropertyBool, "SetPropertyBool" }, // 329702188
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_SetPropertyFloat, "SetPropertyFloat" }, // 626739721
				{ &Z_Construct_UFunction_AMainMenuPluginHUD_SetPropertyInt, "SetPropertyInt" }, // 2886461866
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "MainMenuPluginHUD.h" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSettings_MetaData[] = {
				{ "Category", "MainMenuPluginHUD" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "GameSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, GameSettings), Z_Construct_UScriptStruct_FGameSettings, METADATA_PARAMS(NewProp_GameSettings_MetaData, ARRAY_COUNT(NewProp_GameSettings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlWidget_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ControlWidget = { UE4CodeGen_Private::EPropertyClass::Class, "ControlWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010015, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, ControlWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ControlWidget_MetaData, ARRAY_COUNT(NewProp_ControlWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitlesMenuWidget_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_TitlesMenuWidget = { UE4CodeGen_Private::EPropertyClass::Class, "TitlesMenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010015, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, TitlesMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_TitlesMenuWidget_MetaData, ARRAY_COUNT(NewProp_TitlesMenuWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyBindMenuWidget_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_KeyBindMenuWidget = { UE4CodeGen_Private::EPropertyClass::Class, "KeyBindMenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010015, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, KeyBindMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_KeyBindMenuWidget_MetaData, ARRAY_COUNT(NewProp_KeyBindMenuWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsMenuWidget_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsMenuWidget = { UE4CodeGen_Private::EPropertyClass::Class, "SettingsMenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010015, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, SettingsMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_SettingsMenuWidget_MetaData, ARRAY_COUNT(NewProp_SettingsMenuWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMenuWidget_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameMenuWidget = { UE4CodeGen_Private::EPropertyClass::Class, "GameMenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010015, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, GameMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_GameMenuWidget_MetaData, ARRAY_COUNT(NewProp_GameMenuWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidget_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainMenuWidget = { UE4CodeGen_Private::EPropertyClass::Class, "MainMenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010015, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, MainMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_MainMenuWidget_MetaData, ARRAY_COUNT(NewProp_MainMenuWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameScreenWidget_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameScreenWidget = { UE4CodeGen_Private::EPropertyClass::Class, "GameScreenWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010015, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, GameScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_GameScreenWidget_MetaData, ARRAY_COUNT(NewProp_GameScreenWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuMapName_MetaData[] = {
				{ "Category", "MainMenuPluginHUD" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MainMenuMapName = { UE4CodeGen_Private::EPropertyClass::Str, "MainMenuMapName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, MainMenuMapName), METADATA_PARAMS(NewProp_MainMenuMapName_MetaData, ARRAY_COUNT(NewProp_MainMenuMapName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClass_MetaData[] = {
				{ "Category", "MainMenuPluginHUD" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClass = { UE4CodeGen_Private::EPropertyClass::Object, "SoundClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(NewProp_SoundClass_MetaData, ARRAY_COUNT(NewProp_SoundClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkLenght_MetaData[] = {
				{ "Category", "MainMenuPluginHUD" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarkLenght = { UE4CodeGen_Private::EPropertyClass::Float, "MarkLenght", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, MarkLenght), METADATA_PARAMS(NewProp_MarkLenght_MetaData, ARRAY_COUNT(NewProp_MarkLenght_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkColor_MetaData[] = {
				{ "Category", "MainMenuPluginHUD" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkColor = { UE4CodeGen_Private::EPropertyClass::Struct, "MarkColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, MarkColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_MarkColor_MetaData, ARRAY_COUNT(NewProp_MarkColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[] = {
				{ "Category", "MainMenuPluginHUD" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextScale = { UE4CodeGen_Private::EPropertyClass::Float, "TextScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, TextScale), METADATA_PARAMS(NewProp_TextScale_MetaData, ARRAY_COUNT(NewProp_TextScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedRace_MetaData[] = {
				{ "Category", "MainMenuPluginHUD" },
				{ "ModuleRelativePath", "MainMenuPluginHUD.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedRace = { UE4CodeGen_Private::EPropertyClass::Int, "SelectedRace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AMainMenuPluginHUD, SelectedRace), METADATA_PARAMS(NewProp_SelectedRace_MetaData, ARRAY_COUNT(NewProp_SelectedRace_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControlWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TitlesMenuWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyBindMenuWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SettingsMenuWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameMenuWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MainMenuWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameScreenWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MainMenuMapName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarkLenght,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarkColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectedRace,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMainMenuPluginHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMainMenuPluginHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenuPluginHUD, 3876048265);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenuPluginHUD(Z_Construct_UClass_AMainMenuPluginHUD, &AMainMenuPluginHUD::StaticClass, TEXT("/Script/MainMenuPluginRuntime"), TEXT("AMainMenuPluginHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuPluginHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
