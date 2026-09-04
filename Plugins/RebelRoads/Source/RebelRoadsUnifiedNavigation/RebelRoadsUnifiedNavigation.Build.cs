using UnrealBuildTool;

public class RebelRoadsUnifiedNavigation : ModuleRules {
    public RebelRoadsUnifiedNavigation(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "NavigationSystem",
            "RebelDebugService",
            "RebelSpatialSystem",
        });
    }
}
