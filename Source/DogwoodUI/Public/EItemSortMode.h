#pragma once
#include "CoreMinimal.h"
#include "EItemSortMode.generated.h"

UENUM(BlueprintType)
enum class EItemSortMode : uint8 {
    New,
    Name,
    Value,
    Weight,
    Rarity,
};

