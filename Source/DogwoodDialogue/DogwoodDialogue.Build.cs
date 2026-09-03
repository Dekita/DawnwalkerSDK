using UnrealBuildTool;

public class DogwoodDialogue : ModuleRules {
    public DogwoodDialogue(ReadOnlyTargetRules Target) : base(Target) {
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
            "AkAudio",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialogueSystem",
            "DogwoodGlossary",
            "DogwoodInventory",
            "DogwoodSystem",
            "DogwoodVampireHunger",
            "Engine",
            "GameplayTags",
            "LevelSequence",
            "Quest",
            "RebelUtils",
        });
    }
}
