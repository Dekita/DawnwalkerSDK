using UnrealBuildTool;

public class DogwoodAI : ModuleRules {
    public DogwoodAI(ReadOnlyTargetRules Target) : base(Target) {
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
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DogwoodAICore",
            "DogwoodCombat",
            "DogwoodFocus",
            "DogwoodInventory",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "Population",
            "RebelAI",
            "RebelBypassing",
            "RebelRoads",
            "RebelSettings",
        });
    }
}
