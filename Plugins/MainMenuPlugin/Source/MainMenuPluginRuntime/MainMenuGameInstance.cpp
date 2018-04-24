// Copyright 2018 Pavlov Dmitriy
#include "MainMenuGameInstance.h"
#include "Runtime/MoviePlayer/Public/MoviePlayer.h"
#include "Blueprint/UserWidget.h"

void UMainMenuGameInstance::Init()
{
	Super::Init();

	if (LoadingScreenWidget)
	{
		LoadScreenWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), LoadingScreenWidget);

	}

	FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &UMainMenuGameInstance::BeginLoadingScreen);
	//FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UMainMenuGameInstance::EndLoadingScreen);


}

void UMainMenuGameInstance::BeginLoadingScreen(const FString& InMapName)
{
	if (!LogoShow)
	{
		if (!IsRunningDedicatedServer())
		{
			FLoadingScreenAttributes LoadingScreenLogo;

			LoadingScreenLogo.bAutoCompleteWhenLoadingCompletes = false;

			LoadingScreenLogo.bMoviesAreSkippable = true;

			LoadingScreenLogo.MinimumLoadingScreenDisplayTime = 6;


			LoadingScreenLogo.MoviePaths.Add(LogoMovie);
			
			GetMoviePlayer()->SetupLoadingScreen(LoadingScreenLogo);
			GetMoviePlayer()->PlayMovie();
		}

		LogoShow = true;
	}
	else
	{
		if (!IsRunningDedicatedServer())
		{
			FLoadingScreenAttributes LoadingScreen;
			LoadingScreen.bAutoCompleteWhenLoadingCompletes = false;

			if (LoadScreenWidgetInstance)
			{
				LoadingScreen.WidgetLoadingScreen = LoadScreenWidgetInstance->TakeWidget();
			}
			else
			{
				LoadingScreen.WidgetLoadingScreen = FLoadingScreenAttributes::NewTestLoadingScreenWidget();
			}

			GetMoviePlayer()->SetupLoadingScreen(LoadingScreen);
		}
	}
	
}

//void UMainMenuGameInstance::EndLoadingScreen(UWorld* InLoadedWorld)
//{

//}