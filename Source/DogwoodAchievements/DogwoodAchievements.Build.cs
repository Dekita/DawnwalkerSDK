using UnrealBuildTool;

public class DogwoodAchievements : ModuleRules {
    public DogwoodAchievements(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DogwoodInventory",
            "Engine",
            "GameplayTags",
        });
    }
}
