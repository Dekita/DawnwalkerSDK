using UnrealBuildTool;

public class DogwoodAbilitySystem : ModuleRules {
    public DogwoodAbilitySystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "Paper2D",
            "Persistency",
        });
    }
}
