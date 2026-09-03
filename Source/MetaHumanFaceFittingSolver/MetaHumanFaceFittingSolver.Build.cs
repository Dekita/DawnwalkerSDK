using UnrealBuildTool;

public class MetaHumanFaceFittingSolver : ModuleRules {
    public MetaHumanFaceFittingSolver(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MetaHumanConfig",
            "MetaHumanFaceAnimationSolver",
        });
    }
}
