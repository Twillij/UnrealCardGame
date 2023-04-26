// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PrototypeCardGame : ModuleRules
{
	public PrototypeCardGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"HeadMountedDisplay",
			"NavigationSystem",
			"AIModule",
			"Niagara",
			"EnhancedInput"
		});

		PublicIncludePaths.AddRange(new string[] { "PrototypeCardGame" });
	}
}
