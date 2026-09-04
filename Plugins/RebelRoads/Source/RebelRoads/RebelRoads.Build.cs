using UnrealBuildTool;

public class RebelRoads : ModuleRules {
    public RebelRoads(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "NavigationSystem",
            "RebelDebugService",
            "RebelSpatialSystem",
        });
    }
}
