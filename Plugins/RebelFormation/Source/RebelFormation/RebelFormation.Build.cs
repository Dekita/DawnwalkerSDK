using UnrealBuildTool;

public class RebelFormation : ModuleRules {
    public RebelFormation(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "Population",
            "RebelLocomotion",
            "RebelUtils",
        });
    }
}
