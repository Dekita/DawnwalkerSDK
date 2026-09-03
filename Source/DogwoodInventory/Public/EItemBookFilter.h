#pragma once
#include "CoreMinimal.h"
#include "EItemBookFilter.generated.h"

UENUM(BlueprintType)
enum class EItemBookFilter : uint8 {
    None,
    MagicAll,
    MagicActive,
    MagicPassive,
    CombatAll,
    CombatActive,
    CombatPassive,
};

