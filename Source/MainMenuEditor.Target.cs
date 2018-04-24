// Copyright 2018 Pavlov Dmitriy

using UnrealBuildTool;
using System.Collections.Generic;

public class MainMenuEditorTarget : TargetRules
{
	public MainMenuEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "MainMenu" } );
	}
}
