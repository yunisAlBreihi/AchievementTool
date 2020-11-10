// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AchievementProject : ModuleRules
{
    public AchievementProject(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "Blutility", "UMG", "UnrealEd", "Slate", "SlateCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        PublicIncludePaths.AddRange(new string[] { System.IO.Path.GetFullPath(Target.RelativeEnginePath) + "Source/Editor/Blutility/Private" });
    }
}
