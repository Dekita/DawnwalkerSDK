#pragma once
#include "CoreMinimal.h"
#include "EUIAudioCategory.generated.h"

UENUM(BlueprintType)
enum class EUIAudioCategory : uint8 {
    None,
    InitialSettings,
    TitleScreen,
    Main,
    Death,
    Load,
    Save,
    Pause,
    HUD,
    ActiveAbilities,
    Character,
    CharacterStats,
    Court,
    Crafting,
    Glossary,
    Inventory,
    Journal,
    Map,
    Nexus,
    GameHUB,
    Shrine,
    ShrineWait,
    BOI,
    GameplayToolbar,
    Dialogue,
    ItemUpgrade,
    Looting,
    Shop,
    Storage,
    ItemMaterial,
    Ability,
    Popup,
    Settings,
    DifficultySelect,
    DifficultyCustomise,
    NUM_PAGES,
};

