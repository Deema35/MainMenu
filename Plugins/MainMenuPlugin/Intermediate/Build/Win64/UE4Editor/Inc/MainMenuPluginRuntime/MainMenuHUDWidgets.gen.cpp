// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MainMenuHUDWidgets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuHUDWidgets() {}
// Cross Module References
	MAINMENUPLUGINRUNTIME_API UClass* Z_Construct_UClass_UMainMenuRadarHUDWidget_NoRegister();
	MAINMENUPLUGINRUNTIME_API UClass* Z_Construct_UClass_UMainMenuRadarHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MainMenuPluginRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMainMenuRadarHUDWidget::StaticRegisterNativesUMainMenuRadarHUDWidget()
	{
	}
	UClass* Z_Construct_UClass_UMainMenuRadarHUDWidget_NoRegister()
	{
		return UMainMenuRadarHUDWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UMainMenuRadarHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "MainMenuHUDWidgets.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "MainMenuHUDWidgets.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalQuestMarkColor_MetaData[] = {
				{ "Category", "MainMenuRadarHUDWidget" },
				{ "ModuleRelativePath", "MainMenuHUDWidgets.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalQuestMarkColor = { UE4CodeGen_Private::EPropertyClass::Struct, "OptionalQuestMarkColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMainMenuRadarHUDWidget, OptionalQuestMarkColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_OptionalQuestMarkColor_MetaData, ARRAY_COUNT(NewProp_OptionalQuestMarkColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainQuestMarkColor_MetaData[] = {
				{ "Category", "MainMenuRadarHUDWidget" },
				{ "ModuleRelativePath", "MainMenuHUDWidgets.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MainQuestMarkColor = { UE4CodeGen_Private::EPropertyClass::Struct, "MainQuestMarkColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMainMenuRadarHUDWidget, MainQuestMarkColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_MainQuestMarkColor_MetaData, ARRAY_COUNT(NewProp_MainQuestMarkColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkLenght_MetaData[] = {
				{ "Category", "MainMenuRadarHUDWidget" },
				{ "ModuleRelativePath", "MainMenuHUDWidgets.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarkLenght = { UE4CodeGen_Private::EPropertyClass::Float, "MarkLenght", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMainMenuRadarHUDWidget, MarkLenght), METADATA_PARAMS(NewProp_MarkLenght_MetaData, ARRAY_COUNT(NewProp_MarkLenght_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadarWidgetSize_MetaData[] = {
				{ "Category", "MainMenuRadarHUDWidget" },
				{ "ModuleRelativePath", "MainMenuHUDWidgets.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadarWidgetSize = { UE4CodeGen_Private::EPropertyClass::Float, "RadarWidgetSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMainMenuRadarHUDWidget, RadarWidgetSize), METADATA_PARAMS(NewProp_RadarWidgetSize_MetaData, ARRAY_COUNT(NewProp_RadarWidgetSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadarVisionDistance_MetaData[] = {
				{ "Category", "MainMenuRadarHUDWidget" },
				{ "ModuleRelativePath", "MainMenuHUDWidgets.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadarVisionDistance = { UE4CodeGen_Private::EPropertyClass::Float, "RadarVisionDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UMainMenuRadarHUDWidget, RadarVisionDistance), METADATA_PARAMS(NewProp_RadarVisionDistance_MetaData, ARRAY_COUNT(NewProp_RadarVisionDistance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OptionalQuestMarkColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MainQuestMarkColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MarkLenght,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadarWidgetSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadarVisionDistance,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMainMenuRadarHUDWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMainMenuRadarHUDWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UMainMenuRadarHUDWidget, 3539118989);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenuRadarHUDWidget(Z_Construct_UClass_UMainMenuRadarHUDWidget, &UMainMenuRadarHUDWidget::StaticClass, TEXT("/Script/MainMenuPluginRuntime"), TEXT("UMainMenuRadarHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuRadarHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
