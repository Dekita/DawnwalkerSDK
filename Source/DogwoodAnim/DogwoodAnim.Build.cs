using UnrealBuildTool;

public class DogwoodAnim : ModuleRules {
    public DogwoodAnim(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DialogueSystem",
            "DogwoodCombat",
            "Engine",
            "Niagara",
            "NiagaraAnimNotifies",
            "RebelLocomotion",
        });
    }
}
