// Copyright 2018 Pavlov Dmitriy
#pragma once
#include "Engine/GameInstance.h"
#include "MainMenuGameInstance.generated.h"

class UUserWidget;

UCLASS()

class MAINMENUPLUGINRUNTIME_API UMainMenuGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = UI)
		TSubclassOf<UUserWidget> LoadingScreenWidget;

	UPROPERTY(EditDefaultsOnly)

		FString LogoMovie = FString ("UELogo");

	UPROPERTY()
	UUserWidget* LoadScreenWidgetInstance;

	bool LogoShow = false;

	bool CurrentShowFPS = false;

	virtual void Init() override;

	virtual void BeginLoadingScreen(const FString& MapName);
	

};