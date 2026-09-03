#pragma once
#include "CoreMinimal.h"
#include "ENotificationType.generated.h"

UENUM(BlueprintType)
enum class ENotificationType : uint8 {
    None,
    Item,
    Quest,
    QuestEnd,
    Level,
    Experience,
    Time,
    Map,
    AlertLevel,
    CraftingAutofill,
    RegionEntered,
    TraitLevelAvailable,
    GlossaryEntry,
    TraitPoints,
    NewMappinsDiscovered,
    MutationLevel,
    PerkUnlocked,
    CraftingRecipeUnlocked,
    TimeReward,
};

