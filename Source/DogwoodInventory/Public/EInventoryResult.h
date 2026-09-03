#pragma once
#include "CoreMinimal.h"
#include "EInventoryResult.generated.h"

UENUM(BlueprintType)
enum class EInventoryResult : uint8 {
    None,
    Success,
    Failure,
    ItemsNotFound,
    NotEnoughItems,
    NotEnoughSpace,
    NotEnoughCurrency,
    NotEnoughIngredients,
    ItemNotCraftable,
    NoAvailableSlots,
    ItemUnequipped,
    ItemNotUsable,
    ItemQuantityLimitReached,
    NotAllItemsSold,
    EquipmentChangeLocked,
    EquipmentChangeLockedInCombat,
    ItemNotUpgradeable,
};

