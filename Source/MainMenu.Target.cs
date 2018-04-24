// Copyright 2018 Pavlov Dmitriy

using UnrealBuildTool;
using System.Collections.Generic;

public class MainMenuTarget : TargetRules
{
	public MainMenuTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "MainMenu" } );
	}
}
