// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Pressure_Switch : ModuleRules
{
	public Pressure_Switch(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
