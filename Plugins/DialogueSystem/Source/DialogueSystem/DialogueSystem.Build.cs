using UnrealBuildTool;

public class DialogueSystem : ModuleRules {
    public DialogueSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "CinematicCamera",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EngineCameras",
            "FactsDB",
            "Flow",
            "GameplayTags",
            "LevelSequence",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "NodeRuntime",
            "Paper2D",
            "Persistency",
            "Quest",
            "RebelAudio",
            "RebelLoading",
            "UMG",
        });
    }
}
