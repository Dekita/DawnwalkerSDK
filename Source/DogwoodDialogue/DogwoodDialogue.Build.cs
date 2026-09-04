using UnrealBuildTool;

public class DogwoodDialogue : ModuleRules {
    public DogwoodDialogue(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialogueSystem",
            "DogwoodGlossary",
            "DogwoodInventory",
            "DogwoodSystem",
            "DogwoodVampireHunger",
            "Engine",
            "Flow",
            "GameplayTags",
            "LevelSequence",
            "Quest",
            "RebelUtils",
        });
    }
}
