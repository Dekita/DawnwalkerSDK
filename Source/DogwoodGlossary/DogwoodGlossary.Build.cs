using UnrealBuildTool;

public class DogwoodGlossary : ModuleRules {
    public DogwoodGlossary(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonInput",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "NodeRuntime",
            "Paper2D",
            "Persistency",
            "Quest",
            "RebelUtils",
            "SlateCore",
        });
    }
}
