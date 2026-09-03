using UnrealBuildTool;

public class KiBLIICommonUI : ModuleRules {
    public KiBLIICommonUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonInput",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "UMG",
        });
    }
}
