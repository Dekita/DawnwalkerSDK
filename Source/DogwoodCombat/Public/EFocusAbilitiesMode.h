#pragma once
#include "CoreMinimal.h"
#include "EFocusAbilitiesMode.generated.h"

UENUM(BlueprintType)
enum class EFocusAbilitiesMode : uint8 {
    FocusCombatMode,
    FocusOpenWorldMode,
    None,
};

