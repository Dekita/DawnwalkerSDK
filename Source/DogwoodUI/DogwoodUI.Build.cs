using UnrealBuildTool;

public class DogwoodUI : ModuleRules {
    public DogwoodUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BinkMediaPlayer",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialogueSystem",
            "DogwoodCharacterDevelopment",
            "DogwoodCombat",
            "DogwoodDialogue",
            "DogwoodFocus",
            "DogwoodInventory",
            "DogwoodMap",
            "DogwoodQuest",
            "DogwoodSystem",
            "DogwoodVampireHunger",
            "Engine",
            "EnhancedInput",
            "GameplayAbilities",
            "GameplayTags",
            "MediaAssets",
            "Paper2D",
            "Persistency",
            "Quest",
            "RebelAI",
            "RebelLoading",
            "RebelSettings",
            "RebelToast",
            "RebelUtils",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
