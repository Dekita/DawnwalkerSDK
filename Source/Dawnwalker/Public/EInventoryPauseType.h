#pragma once
#include "CoreMinimal.h"
#include "EInventoryPauseType.generated.h"

UENUM(BlueprintType)
enum class EInventoryPauseType : uint8 {
    OwnsItems,
    OwnsItemsOfSlotTypes,
    HasItemsEquipped,
    HasItemsOfSlotTypesEquipped,
    OwnsItemsOfTypes,
    OwnsItemWithCombo,
    HasItemsWithComboEquipped,
};

