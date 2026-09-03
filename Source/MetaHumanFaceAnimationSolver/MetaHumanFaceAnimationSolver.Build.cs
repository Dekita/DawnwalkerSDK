using UnrealBuildTool;

public class MetaHumanFaceAnimationSolver : ModuleRules {
    public MetaHumanFaceAnimationSolver(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MetaHumanConfig",
        });
    }
}
