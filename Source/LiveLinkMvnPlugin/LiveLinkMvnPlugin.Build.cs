using UnrealBuildTool;

public class LiveLinkMvnPlugin : ModuleRules {
    public LiveLinkMvnPlugin(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "LiveLinkAnimationCore",
            "LiveLinkComponents",
            "LiveLinkInterface",
        });
    }
}
