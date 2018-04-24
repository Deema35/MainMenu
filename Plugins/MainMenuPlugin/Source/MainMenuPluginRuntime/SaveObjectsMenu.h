// Copyright 2018 Pavlov Dmitriy
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveObjectsMenu.generated.h"

class USaveGame;

UCLASS()
class MAINMENUPLUGINRUNTIME_API UMainMenuSaveObject : public USaveGame
{
	GENERATED_BODY()
public:
	UMainMenuSaveObject();

	void SaveRace();

	void DeletRace();

	FString FileName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FDateTime LastDate;

	bool IsObjectLoded = false;
};

USTRUCT()
struct FSaveObjectsMenu
{
	GENERATED_BODY()
public:
	FSaveObjectsMenu() {}

	UPROPERTY()
		TArray<UMainMenuSaveObject*> SavedObjects;

	void LoadSaveRace();

private:

	void GetFilesInFolder(TArray<FString>& FaileNames, FString Directory, FString Mask);
};