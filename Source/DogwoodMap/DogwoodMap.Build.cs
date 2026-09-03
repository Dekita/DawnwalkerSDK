using UnrealBuildTool;

public class DogwoodMap : ModuleRules {
    public DogwoodMap(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DogwoodSystem",
            "Engine",
            "GameplayTags",
            "Paper2D",
            "Persistency",
            "Quest",
            "RebelLoading",
            "SlateCore",
            "UMG",
        });
    }
}
