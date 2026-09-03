using UnrealBuildTool;

public class ErrantBiomesPCG : ModuleRules {
    public ErrantBiomesPCG(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "ErrantBiomesRuntime",
            "PCG",
        });
    }
}
