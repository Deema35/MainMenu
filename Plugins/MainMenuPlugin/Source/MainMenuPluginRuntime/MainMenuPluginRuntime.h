// Copyright 2018 Pavlov Dmitriy

#pragma once

#include "EngineMinimal.h"
#include "ModuleManager.h"




class FMainMenuPluginRuntime : public IModuleInterface
{
	virtual void StartupModule() override { UE_LOG(LogTemp, Log, TEXT("Start ClimbingPawnMovementComponent")); }
	virtual void ShutdownModule() override { UE_LOG(LogTemp, Log, TEXT("End ClimbingPawnMovementComponent")); }

};
