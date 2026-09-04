using UnrealBuildTool;

public class RebelAI : ModuleRules {
    public RebelAI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialogueSystem",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "Niagara",
            "Persistency",
            "Population",
            "RebelDebugService",
            "RebelFormation",
            "RebelGenericTreeModule",
            "RebelLocomotion",
            "RebelSpatialSystem",
            "StateTreeModule",
        });
    }
}
