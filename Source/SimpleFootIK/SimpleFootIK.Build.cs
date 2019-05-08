// Copyright(c) 2019 CatDark, All Rights Reserved.

using UnrealBuildTool;

public class SimpleFootIK : ModuleRules
{
	public SimpleFootIK(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
