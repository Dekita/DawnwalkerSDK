using UnrealBuildTool;

public class DogwoodFocus : ModuleRules {
    public DogwoodFocus(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialogueSystem",
            "DogwoodInventory",
            "DogwoodStats",
            "DogwoodSystem",
            "DogwoodUtil",
            "Engine",
            "EnhancedInput",
            "GameplayAbilities",
            "GameplayTags",
            "LevelSequence",
            "MotionWarping",
            "MovieScene",
            "Paper2D",
            "RebelSpatialSystem",
        });
    }
}
