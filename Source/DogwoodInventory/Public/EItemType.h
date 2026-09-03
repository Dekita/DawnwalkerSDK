#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
    None,
    Quest,
    Misc,
    Junk,
    Readable,
    Consumable,
    Clothing,
    Weapon,
    Silver,
    Service,
    Catalyst,
    Currency,
    CharDev,
    Ingredient,
    Recipe,
    Valuable,
    Key,
    Utility,
    Tooth,
    MAX,
};

