using UnrealBuildTool;

public class Quest : ModuleRules {
    public Quest(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "FactsDB",
            "GameplayTags",
            "MovieSceneTracks",
            "NodeRuntime",
            "Persistency",
            "RebelUtils",
        });
    }
}
