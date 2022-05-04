// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class yuki_io : ModuleRules
{
    public yuki_io(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
    }
}
