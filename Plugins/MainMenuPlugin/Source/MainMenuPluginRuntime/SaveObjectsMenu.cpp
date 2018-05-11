// Copyright 2018 Pavlov Dmitriy
#include "SaveObjectsMenu.h"
#include "Misc/Paths.h"
#include "HAL/FileManagerGeneric.h"
#include "Classes/Kismet/GameplayStatics.h"
#include "MainMenuPluginHUDComponent.h"


UMainMenuSaveObject::UMainMenuSaveObject()
{
	FileName = "Race" + UMainMenuPluginHUDComponent::DateToStringRus(FDateTime::Now()) + "-" + UMainMenuPluginHUDComponent::DateToTimeRus(FDateTime::Now(), ".");
	LastDate = FDateTime::Now();
}

void UMainMenuSaveObject::SaveRace()
{
	UGameplayStatics::SaveGameToSlot(this, FileName, 0);

}

void UMainMenuSaveObject::DeletRace()
{
	UGameplayStatics::DeleteGameInSlot(FileName, 0);
}

//********************************************
//FSaveObjectsMenu
//********************************************

void FSaveObjectsMenu::LoadSaveRace()
{
	SavedObjects.Empty();
	FString Directory = FPaths::ProjectSavedDir() + FString("SaveGames/");
	FString Mask = FString("//*");
	TArray<FString> FaileNames;


	GetFilesInFolder(FaileNames, Directory, Mask);

	for (int i = 0; i < FaileNames.Num(); i++)
	{
		if (FaileNames[i].Len() > 2 && FaileNames[i].Find(".sav") != -1)
		{
			FString FileNameLoc = FaileNames[i].LeftChop(4);
			UMainMenuSaveObject* LoadObject = Cast<UMainMenuSaveObject>(UGameplayStatics::LoadGameFromSlot(FileNameLoc, 0));

			if (LoadObject)
			{
				SavedObjects.Add(LoadObject);
				LoadObject->FileName = FileNameLoc;

				LoadObject->IsObjectLoded = true;
			}
				
		}
	}
}

void FSaveObjectsMenu::GetFilesInFolder(TArray<FString>& FaileNames, FString Directory, FString Mask)
{

	FaileNames.Empty();
	if (FPaths::DirectoryExists(Directory))
	{
		FString path = Directory + Mask;
		FFileManagerGeneric::Get().FindFiles(FaileNames, *path, true, false);

	}
}
