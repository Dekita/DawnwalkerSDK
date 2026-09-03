using UnrealBuildTool;

public class DogwoodQuest : ModuleRules {
    public DogwoodQuest(ReadOnlyTargetRules Target) : base(Target) {
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
            "DeveloperSettings",
            "DogwoodInventory",
            "DogwoodSystem",
            "DogwoodUtil",
            "Engine",
            "FactsDB",
            "GameplayAbilities",
            "GameplayTags",
            "Paper2D",
            "Persistency",
            "Quest",
            "RebelUtils",
        });
    }
}
