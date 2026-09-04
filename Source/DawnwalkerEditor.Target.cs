using UnrealBuildTool;

public class DawnwalkerEditorTarget : TargetRules {
	public DawnwalkerEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		WindowsPlatform.bStrictConformanceMode = true;
		CppStandard = CppStandardVersion.Cpp20;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
		ExtraModuleNames.AddRange(new string[] {
			"Dawnwalker",
			"DogwoodAbilitySystem",
			"DogwoodAchievements",
			"DogwoodAI",
			"DogwoodAICore",
			"DogwoodAnim",
			"DogwoodAudio",
			"DogwoodCharacterDevelopment",
			"DogwoodCombat",
			"DogwoodDebug",
			"DogwoodDialogue",
			"DogwoodFocus",
			"DogwoodGlossary",
			"DogwoodInventory",
			"DogwoodMap",
			"DogwoodNanitePrefetch",
			"DogwoodPGOCollector",
			"DogwoodQuest",
			"DogwoodStats",
			"DogwoodSystem",
			"DogwoodUI",
			"DogwoodUtil",
			"DogwoodVampireHunger",
			"DogwoodWorld",
		});
	}
}
