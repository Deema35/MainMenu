// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MainMenuGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuGameInstance() {}
// Cross Module References
	MAINMENUPLUGINRUNTIME_API UClass* Z_Construct_UClass_UMainMenuGameInstance_NoRegister();
	MAINMENUPLUGINRUNTIME_API UClass* Z_Construct_UClass_UMainMenuGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_MainMenuPluginRuntime();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UMainMenuGameInstance::StaticRegisterNativesUMainMenuGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UMainMenuGameInstance_NoRegister()
	{
		return UMainMenuGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UMainMenuGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_MainMenuPluginRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MainMenuGameInstance.h" },
				{ "ModuleRelativePath", "MainMenuGameInstance.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadScreenWidgetInstance_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MainMenuGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadScreenWidgetInstance = { UE4CodeGen_Private::EPropertyClass::Object, "LoadScreenWidgetInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UMainMenuGameInstance, LoadScreenWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_LoadScreenWidgetInstance_MetaData, ARRAY_COUNT(NewProp_LoadScreenWidgetInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogoMovie_MetaData[] = {
				{ "Category", "MainMenuGameInstance" },
				{ "ModuleRelativePath", "MainMenuGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LogoMovie = { UE4CodeGen_Private::EPropertyClass::Str, "LogoMovie", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UMainMenuGameInstance, LogoMovie), METADATA_PARAMS(NewProp_LogoMovie_MetaData, ARRAY_COUNT(NewProp_LogoMovie_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidget_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "MainMenuGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoadingScreenWidget = { UE4CodeGen_Private::EPropertyClass::Class, "LoadingScreenWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010015, 1, nullptr, STRUCT_OFFSET(UMainMenuGameInstance, LoadingScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_LoadingScreenWidget_MetaData, ARRAY_COUNT(NewProp_LoadingScreenWidget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadScreenWidgetInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LogoMovie,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LoadingScreenWidget,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMainMenuGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMainMenuGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900088u,
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
	IMPLEMENT_CLASS(UMainMenuGameInstance, 3407477398);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenuGameInstance(Z_Construct_UClass_UMainMenuGameInstance, &UMainMenuGameInstance::StaticClass, TEXT("/Script/MainMenuPluginRuntime"), TEXT("UMainMenuGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
