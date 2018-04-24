// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
enum class EMenuSettingsFloatPropertyType : uint8;
enum class EMenuSettingsBoolPropertyType : uint8;
enum class EMenuSettingsIntPropertyType : uint8;
struct FDateTime;
struct FPointerEvent;
struct FKeyEvent;
enum class EMainMenuMode : uint8;
struct FInputActionKeyMapping;
enum class EMainMenuPluginButtonType : uint8;
#ifdef MAINMENUPLUGINRUNTIME_MainMenuPluginHUD_generated_h
#error "MainMenuPluginHUD.generated.h already included, missing '#pragma once' in MainMenuPluginHUD.h"
#endif
#define MAINMENUPLUGINRUNTIME_MainMenuPluginHUD_generated_h

#define MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_KeyNum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetKey(Z_Param_Key,Z_Param_KeyNum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentResolution) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Resolution); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentResolution(Z_Param_Resolution); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetCurrentResolution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResolutionList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetResolutionList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyNameFloat) \
	{ \
		P_GET_ENUM(EMenuSettingsFloatPropertyType,Z_Param_PropertyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetPropertyNameFloat(EMenuSettingsFloatPropertyType(Z_Param_PropertyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyNameBool) \
	{ \
		P_GET_ENUM(EMenuSettingsBoolPropertyType,Z_Param_PropertyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetPropertyNameBool(EMenuSettingsBoolPropertyType(Z_Param_PropertyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyNameInt) \
	{ \
		P_GET_ENUM(EMenuSettingsIntPropertyType,Z_Param_PropertyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetPropertyNameInt(EMenuSettingsIntPropertyType(Z_Param_PropertyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyFloat) \
	{ \
		P_GET_ENUM(EMenuSettingsFloatPropertyType,Z_Param_PropertyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPropertyFloat(EMenuSettingsFloatPropertyType(Z_Param_PropertyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyBool) \
	{ \
		P_GET_ENUM(EMenuSettingsBoolPropertyType,Z_Param_PropertyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPropertyBool(EMenuSettingsBoolPropertyType(Z_Param_PropertyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyInt) \
	{ \
		P_GET_ENUM(EMenuSettingsIntPropertyType,Z_Param_PropertyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPropertyInt(EMenuSettingsIntPropertyType(Z_Param_PropertyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPropertyFloat) \
	{ \
		P_GET_ENUM(EMenuSettingsFloatPropertyType,Z_Param_PropertyType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPropertyFloat(EMenuSettingsFloatPropertyType(Z_Param_PropertyType),Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPropertyBool) \
	{ \
		P_GET_ENUM(EMenuSettingsBoolPropertyType,Z_Param_PropertyType); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPropertyBool(EMenuSettingsBoolPropertyType(Z_Param_PropertyType),Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPropertyInt) \
	{ \
		P_GET_ENUM(EMenuSettingsIntPropertyType,Z_Param_PropertyType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPropertyInt(EMenuSettingsIntPropertyType(Z_Param_PropertyType),Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDateToTimeRus) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_Date); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Separator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=AMainMenuPluginHUD::DateToTimeRus(Z_Param_Date,Z_Param_Separator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDateToStringRus) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_Date); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=AMainMenuPluginHUD::DateToStringRus(Z_Param_Date); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseWheelInput) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=P_THIS->GetMouseWheelInput(Z_Param_Out_PointerEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseKeyInput) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=P_THIS->GetMouseKeyInput(Z_Param_Out_PointerEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyInput) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=P_THIS->GetKeyInput(Z_Param_Out_KeyEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainMenuMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMainMenuMode*)Z_Param__Result=P_THIS->GetMainMenuMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyBinding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FInputActionKeyMapping>*)Z_Param__Result=P_THIS->GetKeyBinding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetButtonName) \
	{ \
		P_GET_ENUM(EMainMenuPluginButtonType,Z_Param_ButtonType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetButtonName(EMainMenuPluginButtonType(Z_Param_ButtonType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execButtonClick) \
	{ \
		P_GET_ENUM(EMainMenuPluginButtonType,Z_Param_ButtonType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ButtonClick(EMainMenuPluginButtonType(Z_Param_ButtonType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMainMenuMode) \
	{ \
		P_GET_ENUM(EMainMenuMode,Z_Param_NewMode); \
		P_GET_UBOOL(Z_Param_WithoutCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMainMenuMode(EMainMenuMode(Z_Param_NewMode),Z_Param_WithoutCheck); \
		P_NATIVE_END; \
	}


#define MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_KeyNum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetKey(Z_Param_Key,Z_Param_KeyNum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentResolution) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Resolution); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentResolution(Z_Param_Resolution); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetCurrentResolution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResolutionList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetResolutionList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyNameFloat) \
	{ \
		P_GET_ENUM(EMenuSettingsFloatPropertyType,Z_Param_PropertyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetPropertyNameFloat(EMenuSettingsFloatPropertyType(Z_Param_PropertyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyNameBool) \
	{ \
		P_GET_ENUM(EMenuSettingsBoolPropertyType,Z_Param_PropertyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetPropertyNameBool(EMenuSettingsBoolPropertyType(Z_Param_PropertyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyNameInt) \
	{ \
		P_GET_ENUM(EMenuSettingsIntPropertyType,Z_Param_PropertyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetPropertyNameInt(EMenuSettingsIntPropertyType(Z_Param_PropertyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyFloat) \
	{ \
		P_GET_ENUM(EMenuSettingsFloatPropertyType,Z_Param_PropertyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPropertyFloat(EMenuSettingsFloatPropertyType(Z_Param_PropertyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyBool) \
	{ \
		P_GET_ENUM(EMenuSettingsBoolPropertyType,Z_Param_PropertyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetPropertyBool(EMenuSettingsBoolPropertyType(Z_Param_PropertyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyInt) \
	{ \
		P_GET_ENUM(EMenuSettingsIntPropertyType,Z_Param_PropertyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPropertyInt(EMenuSettingsIntPropertyType(Z_Param_PropertyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPropertyFloat) \
	{ \
		P_GET_ENUM(EMenuSettingsFloatPropertyType,Z_Param_PropertyType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPropertyFloat(EMenuSettingsFloatPropertyType(Z_Param_PropertyType),Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPropertyBool) \
	{ \
		P_GET_ENUM(EMenuSettingsBoolPropertyType,Z_Param_PropertyType); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPropertyBool(EMenuSettingsBoolPropertyType(Z_Param_PropertyType),Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPropertyInt) \
	{ \
		P_GET_ENUM(EMenuSettingsIntPropertyType,Z_Param_PropertyType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPropertyInt(EMenuSettingsIntPropertyType(Z_Param_PropertyType),Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDateToTimeRus) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_Date); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Separator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=AMainMenuPluginHUD::DateToTimeRus(Z_Param_Date,Z_Param_Separator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDateToStringRus) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_Date); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=AMainMenuPluginHUD::DateToStringRus(Z_Param_Date); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseWheelInput) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=P_THIS->GetMouseWheelInput(Z_Param_Out_PointerEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseKeyInput) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=P_THIS->GetMouseKeyInput(Z_Param_Out_PointerEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyInput) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=P_THIS->GetKeyInput(Z_Param_Out_KeyEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainMenuMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMainMenuMode*)Z_Param__Result=P_THIS->GetMainMenuMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyBinding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FInputActionKeyMapping>*)Z_Param__Result=P_THIS->GetKeyBinding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetButtonName) \
	{ \
		P_GET_ENUM(EMainMenuPluginButtonType,Z_Param_ButtonType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetButtonName(EMainMenuPluginButtonType(Z_Param_ButtonType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execButtonClick) \
	{ \
		P_GET_ENUM(EMainMenuPluginButtonType,Z_Param_ButtonType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ButtonClick(EMainMenuPluginButtonType(Z_Param_ButtonType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMainMenuMode) \
	{ \
		P_GET_ENUM(EMainMenuMode,Z_Param_NewMode); \
		P_GET_UBOOL(Z_Param_WithoutCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMainMenuMode(EMainMenuMode(Z_Param_NewMode),Z_Param_WithoutCheck); \
		P_NATIVE_END; \
	}


#define MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainMenuPluginHUD(); \
	friend MAINMENUPLUGINRUNTIME_API class UClass* Z_Construct_UClass_AMainMenuPluginHUD(); \
public: \
	DECLARE_CLASS(AMainMenuPluginHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/MainMenuPluginRuntime"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuPluginHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAMainMenuPluginHUD(); \
	friend MAINMENUPLUGINRUNTIME_API class UClass* Z_Construct_UClass_AMainMenuPluginHUD(); \
public: \
	DECLARE_CLASS(AMainMenuPluginHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/MainMenuPluginRuntime"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuPluginHUD) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainMenuPluginHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainMenuPluginHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuPluginHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuPluginHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainMenuPluginHUD(AMainMenuPluginHUD&&); \
	NO_API AMainMenuPluginHUD(const AMainMenuPluginHUD&); \
public:


#define MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainMenuPluginHUD(AMainMenuPluginHUD&&); \
	NO_API AMainMenuPluginHUD(const AMainMenuPluginHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuPluginHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuPluginHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainMenuPluginHUD)


#define MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_PRIVATE_PROPERTY_OFFSET
#define MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_35_PROLOG
#define MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_PRIVATE_PROPERTY_OFFSET \
	MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_RPC_WRAPPERS \
	MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_INCLASS \
	MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_PRIVATE_PROPERTY_OFFSET \
	MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_INCLASS_NO_PURE_DECLS \
	MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MainMenu_Plugins_MainMenuPlugin_Source_MainMenuPluginRuntime_MainMenuPluginHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
