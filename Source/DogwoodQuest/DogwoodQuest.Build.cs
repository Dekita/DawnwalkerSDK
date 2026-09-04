using UnrealBuildTool;

public class DogwoodQuest : ModuleRules {
    public DogwoodQuest(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DogwoodInventory",
            "DogwoodSystem",
            "DogwoodUtil",
            "Engine",
            "FactsDB",
            "GameplayAbilities",
            "GameplayTags",
            "NodeRuntime",
            "Paper2D",
            "Persistency",
            "Quest",
            "RebelUtils",
        });
    }
}
