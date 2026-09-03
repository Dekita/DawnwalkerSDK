using UnrealBuildTool;

public class RebelInputDisplay : ModuleRules {
    public RebelInputDisplay(ReadOnlyTargetRules Target) : base(Target) {
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
            "EnhancedInput",
            "InputCore",
            "RebelInput",
            "RebelSettings",
            "SlateCore",
        });
    }
}
