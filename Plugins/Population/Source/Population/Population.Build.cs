using UnrealBuildTool;

public class Population : ModuleRules {
    public Population(ReadOnlyTargetRules Target) : base(Target) {
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
            "Niagara",
            "Persistency",
            "RebelLoading",
            "RebelSpatialSystem",
        });
    }
}
