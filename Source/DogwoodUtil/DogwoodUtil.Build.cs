using UnrealBuildTool;

public class DogwoodUtil : ModuleRules {
    public DogwoodUtil(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialogueSystem",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "LevelSequence",
        });
    }
}
