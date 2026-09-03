using UnrealBuildTool;

public class DogwoodInventory : ModuleRules {
    public DogwoodInventory(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DogwoodGlossary",
            "DogwoodStats",
            "DogwoodSystem",
            "DogwoodUtil",
            "Engine",
            "GamepadVibration",
            "GameplayAbilities",
            "GameplayTags",
            "HairStrandsCore",
            "Paper2D",
            "Persistency",
            "Quest",
            "RebelLoading",
            "RebelTableRow",
            "RebelUtils",
        });
    }
}
