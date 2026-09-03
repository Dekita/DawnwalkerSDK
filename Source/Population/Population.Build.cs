using UnrealBuildTool;

public class Population : ModuleRules {
    public Population(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "Dawnwalker",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "NavigationSystem",
            "Niagara",
            "Persistency",
            "RebelLoading",
            "RebelSpatialSystem",
        });

        // Population -> Dawnwalker closes a real circular reference (Dawnwalker -> DogwoodAI -> DogwoodCombat ->
        // Population -> Dawnwalker) that the original compiled game resolved via forward declarations/deferred
        // includes we cannot reconstruct from reflection data alone. Explicitly allow the cycle rather than
        // dropping the dependency, since UBT only needs to know it's intentional to build these modules together.
        CircularlyReferencedDependentModules.Add("Dawnwalker");
    }
}
