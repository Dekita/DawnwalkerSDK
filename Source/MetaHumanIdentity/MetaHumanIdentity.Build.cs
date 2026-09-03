using UnrealBuildTool;

public class MetaHumanIdentity : ModuleRules {
    public MetaHumanIdentity(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CaptureDataCore",
            "Core",
            "CoreUObject",
            "Engine",
            "GeometryFramework",
            "MetaHumanCore",
            "MetaHumanFaceContourTracker",
            "MetaHumanFaceFittingSolver",
            "MetaHumanMeshTracker",
        });
    }
}
