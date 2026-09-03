#pragma once
#include "CoreMinimal.h"
#include "EAbilityCostOutcomeMask.generated.h"

UENUM(BlueprintType)
enum class EAbilityCostOutcomeMask : uint8 {
    None,
    NotEnoughHealth,
    NotEnoughBlood,
    NotEnoughFocusCharges = 4,
    NoRequiredItemInInventory = 8,
};

