// Copyright 2018 Pavlov Dmitriy
#pragma once
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include <vector>
#include "MainMenuHUDWidgets.generated.h"

class UMainMenuPluginHUDComponent;

UCLASS(Blueprintable)
class MAINMENUPLUGINRUNTIME_API UMainMenuRadarHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
		float RadarVisionDistance = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RadarWidgetSize = 256;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float MarkLenght = 12;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FLinearColor MainQuestMarkColor = FLinearColor::Red;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FLinearColor OptionalQuestMarkColor = FLinearColor::Blue;


public:

	virtual void NativeConstruct() override;

	virtual int32 NativePaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect,
		FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;


private:

	void DrawRadarMark(FPaintContext& InContext, FLinearColor MarkColor, FVector Target) const;

	static float GetXYAngle(FVector V1, FVector V2);

private:

	bool IsIniciate;

	UMainMenuPluginHUDComponent* HUDComponent = nullptr;
};

