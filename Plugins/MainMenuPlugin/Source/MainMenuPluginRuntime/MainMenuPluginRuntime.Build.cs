// Copyright 2018 Pavlov Dmitriy

using UnrealBuildTool;

public class MainMenuPluginRuntime : ModuleRules
{
	public MainMenuPluginRuntime(ReadOnlyTargetRules ROTargetRules) : base(ROTargetRules)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs; // Enabel IWYU

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "SlateCore","MoviePlayer" });


        PrivateDependencyModuleNames.AddRange(new string[] { "RHI", "UMG", });

		
	}
}
