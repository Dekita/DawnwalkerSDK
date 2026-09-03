using UnrealBuildTool;

public class DogwoodSystem : ModuleRules {
    public DogwoodSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicCamera",
            "NavigationSystem",
            "FieldNotification",
            "GameplayTasks",
            "MovieScene",
            "UMG",
            "UniversalObjectLocator",
            "Flow",
            "NodeRuntime",
            "AIModule",
            "CommonInput",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "GameplayAbilities",
            "GameplayTags",
            "Paper2D",
            "Persistency",
            "Quest",
            "RebelCamera",
            "RebelUtils",
            "SkyCreatorPlugin",
        });
    }
}
