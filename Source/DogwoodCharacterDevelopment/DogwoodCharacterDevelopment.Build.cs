using UnrealBuildTool;

public class DogwoodCharacterDevelopment : ModuleRules {
    public DogwoodCharacterDevelopment(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DogwoodFocus",
            "DogwoodInventory",
            "DogwoodStats",
            "DogwoodSystem",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "MediaAssets",
            "Paper2D",
            "Persistency",
            "Quest",
        });
    }
}
