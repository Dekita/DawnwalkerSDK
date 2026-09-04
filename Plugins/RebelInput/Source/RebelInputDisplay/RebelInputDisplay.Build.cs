using UnrealBuildTool;

public class RebelInputDisplay : ModuleRules {
    public RebelInputDisplay(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
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
            "UMG",
        });
    }
}
