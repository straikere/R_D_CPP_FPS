// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class R_D_CPP_FPS : ModuleRules
{
	public R_D_CPP_FPS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
