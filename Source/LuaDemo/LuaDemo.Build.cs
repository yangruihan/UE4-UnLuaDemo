// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LuaDemo : ModuleRules
{
	public LuaDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
        new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "HeadMountedDisplay"
        });
  
        PrivateDependencyModuleNames.AddRange(
        new string[]
        {
            "UnLua"
        });
	}
}
