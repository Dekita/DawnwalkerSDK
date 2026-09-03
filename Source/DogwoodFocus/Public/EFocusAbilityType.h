#pragma once
#include "CoreMinimal.h"
#include "EFocusAbilityType.generated.h"

UENUM(BlueprintType)
enum class EFocusAbilityType : uint8 {
    None,
    Combat,
    Vampire,
    Magic,
    ExclusiveOpenWorldMagic,
    ExclusiveOpenWorldVampire,
    OpenWorldPreCombatVampire,
};

