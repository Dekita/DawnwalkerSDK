using UnrealBuildTool;

public class RebelSettings : ModuleRules {
    public RebelSettings(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "GameplayTags",
            "RebelFramegenInitModule",
            "RebelUtils",
            "SlateCore",
            "UMG",
        });
    }
}
