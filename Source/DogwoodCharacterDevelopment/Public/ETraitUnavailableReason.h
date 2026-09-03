#pragma once
#include "CoreMinimal.h"
#include "ETraitUnavailableReason.generated.h"

UENUM(BlueprintType)
enum class ETraitUnavailableReason : uint8 {
    None,
    AvailableTraitPoints,
    TraitPointsSpent,
    UltimateAlreadyUnlocked = 4,
    UnlockableWithQuest = 8,
    TraitParent = 16,
    TraitLevelDoesntExist = 32,
    TraitIsHidden = 64,
    TraitLevelIsBlocked = 128,
};

