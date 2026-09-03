using UnrealBuildTool;

public class DogwoodCombat : ModuleRules {
    public DogwoodCombat(ReadOnlyTargetRules Target) : base(Target) {
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
            "DialogueSystem",
            "DogwoodFocus",
            "DogwoodInventory",
            "DogwoodStats",
            "DogwoodSystem",
            "Engine",
            "EnhancedInput",
            "GamepadVibration",
            "GameplayAbilities",
            "GameplayTags",
            "LevelSequence",
            "MotionWarping",
            "Niagara",
            "Persistency",
            "Population",
            "Quest",
            "RebelAI",
            "RebelCamera",
            "RebelLoading",
            "RebelLocomotion",
            "RebelSettings",
            "RebelTableRow",
            "RebelUtils",
        });
    }
}
