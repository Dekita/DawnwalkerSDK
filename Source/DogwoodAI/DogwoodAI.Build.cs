using UnrealBuildTool;

public class DogwoodAI : ModuleRules {
    public DogwoodAI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DogwoodAICore",
            "DogwoodCombat",
            "DogwoodFocus",
            "DogwoodInventory",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "NavigationSystem",
            "Population",
            "RebelAI",
            "RebelBypassing",
            "RebelRoads",
            "RebelSettings",
        });
    }
}
