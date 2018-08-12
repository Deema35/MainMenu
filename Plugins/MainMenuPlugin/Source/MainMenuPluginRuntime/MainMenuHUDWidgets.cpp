// Copyright 2018 Pavlov Dmitriy
#include "MainMenuHUDWidgets.h"
#include "MainMenuPluginHUDComponent.h"
#include "GameFramework/HUD.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"

//UMainMenuRadarHUDWidget.........................................................................

void UMainMenuRadarHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	AHUD* HUD = GetWorld()->GetFirstPlayerController()->GetHUD();

	if (!HUD) throw;
	
	UActorComponent* ActorComponent = HUD->GetComponentByClass(UMainMenuPluginHUDComponent::StaticClass());

	if (!ActorComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("Set MainMenuPluginHUDComponent"));
	}
	else
	{
		HUDComponent = Cast<UMainMenuPluginHUDComponent>(ActorComponent);
	}
}





int32 UMainMenuRadarHUDWidget::NativePaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect,
	FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	const std::vector<FVector*>& RadarTargets = HUDComponent->GetRadarTargets();

	FPaintContext PaintContext(AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);

	for (int i = 0; i < RadarTargets.size(); i++)
	{
		DrawRadarMark(PaintContext, MainQuestMarkColor, *RadarTargets[i]);
	}


	return Super::NativePaint(Args, AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);
}

void UMainMenuRadarHUDWidget::DrawRadarMark(FPaintContext& InContext, FLinearColor MarkColor, FVector Target) const
{
	APawn* Character = GetWorld() ? GetWorld()->GetFirstPlayerController()->GetPawn() : nullptr;

	float Distance = FVector::Dist2D(Target, Character->GetActorLocation());
	float DistanceMark = Distance > RadarVisionDistance ? RadarVisionDistance : Distance;

	float Angle = GetXYAngle(Character->GetActorForwardVector(),  Character->GetActorLocation() - Target);

	FVector MarkVector = FVector(0, 0, 0);
	MarkVector.Y = DistanceMark / RadarVisionDistance * (RadarWidgetSize / 2 - 5);

	MarkVector = MarkVector.RotateAngleAxis(Angle, FVector(0, 0, 1)); //Rotate vector in current angle
	MarkVector = MarkVector + FVector(RadarWidgetSize / 2, RadarWidgetSize / 2, 0);

	FVector2D A;
	FVector2D B;

	A.X = MarkVector.X - MarkLenght / 2;
	A.Y = MarkVector.Y - MarkLenght / 2;
	B.X = MarkVector.X + MarkLenght / 2;
	B.Y = MarkVector.Y + MarkLenght / 2;

	UWidgetBlueprintLibrary::DrawLine(InContext, A, B, MarkColor);


	A.X = MarkVector.X - MarkLenght / 2;
	A.Y = MarkVector.Y + MarkLenght / 2;
	B.X = MarkVector.X + MarkLenght / 2;
	B.Y = MarkVector.Y - MarkLenght / 2;
	UWidgetBlueprintLibrary::DrawLine(InContext, A, B, MarkColor);

}

float UMainMenuRadarHUDWidget::GetXYAngle(FVector V1, FVector V2)
{
	float V1Len = V1.Size2D();
	float V2Len = V2.Size2D();

	float ScalarProduct = (V1.X * V2.X + V1.Y * V2.Y);
	float CosVek = ScalarProduct / (V1Len * V2Len);
	float B = V1.X * V2.Y - V2.X * V1.Y;
	float Sign = B > 0 ? 1 : -1;
	return acos(CosVek)  * 180.0 / PI * Sign;
}