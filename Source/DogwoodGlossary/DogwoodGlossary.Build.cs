using UnrealBuildTool;

public class DogwoodGlossary : ModuleRules {
    public DogwoodGlossary(ReadOnlyTargetRules Target) : base(Target) {
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
            "CommonInput",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "Paper2D",
            "Persistency",
            "Quest",
            "RebelUtils",
            "SlateCore",
        });
    }
}
