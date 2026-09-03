using UnrealBuildTool;

public class DogwoodAudio : ModuleRules {
    public DogwoodAudio(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "DialogueSystem",
            "Engine",
            "ErrantBiomesRuntime",
            "GameplayTags",
            "MediaAssets",
            "Persistency",
            "RebelAudio",
        });
    }
}
