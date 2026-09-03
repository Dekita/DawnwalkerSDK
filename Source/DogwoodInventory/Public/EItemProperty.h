#pragma once
#include "CoreMinimal.h"
#include "EItemProperty.generated.h"

UENUM(BlueprintType)
enum class EItemProperty : uint8 {
    None,
    IsUsable,
    IsDroppable,
    IsEquippable = 4,
    IsSellable = 8,
    IsStackable = 16,
    IsFake = 32,
};

