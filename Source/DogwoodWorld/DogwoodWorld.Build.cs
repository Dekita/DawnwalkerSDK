using UnrealBuildTool;

public class DogwoodWorld : ModuleRules {
    public DogwoodWorld(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicCamera",
            "FieldNotification",
            "GameplayTasks",
            "MovieScene",
            "UniversalObjectLocator",
            "Flow",
            "NodeRuntime",
            "AIModule",
            "AkAudio",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialogueSystem",
            "DogwoodAICore",
            "DogwoodFocus",
            "DogwoodInventory",
            "DogwoodMap",
            "DogwoodQuest",
            "DogwoodSystem",
            "DogwoodUI",
            "Engine",
            "EnhancedInput",
            "FactsDB",
            "GameplayAbilities",
            "GameplayTags",
            "LevelSequence",
            "NavigationSystem",
            "Niagara",
            "Persistency",
            "Population",
            "Quest",
            "RebelCamera",
            "RebelLocomotion",
            "RebelSpatialSystem",
            "SkyCreatorPlugin",
            "UMG",
        });
    }
}
