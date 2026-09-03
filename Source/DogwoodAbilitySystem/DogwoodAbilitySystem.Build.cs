using UnrealBuildTool;

public class DogwoodAbilitySystem : ModuleRules {
    public DogwoodAbilitySystem(ReadOnlyTargetRules Target) : base(Target) {
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
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "Paper2D",
            "Persistency",
        });
    }
}
