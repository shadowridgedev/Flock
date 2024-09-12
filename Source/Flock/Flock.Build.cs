// Flock.Build.cs

using UnrealBuildTool;

public class Flock : ModuleRules
{
    public Flock(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",            // Core module needed for all Unreal projects
            "CoreUObject",     // Required for reflection and UObject support
            "Engine",          // Required for the GameFramework (e.g., Character)
            "InputCore",       // Input handling
            "AIModule",        // Required for AIController, etc.
            "GameplayTasks"    // Required for AI behavior and movement
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}
