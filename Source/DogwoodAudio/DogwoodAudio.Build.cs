using UnrealBuildTool;

public class DogwoodAudio : ModuleRules {
    public DogwoodAudio(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialogueSystem",
            "Engine",
            "GameplayTags",
            "MediaAssets",
            "Persistency",
            "RebelAudio",
        });
    }
}
