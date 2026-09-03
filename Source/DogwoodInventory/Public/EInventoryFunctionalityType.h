#pragma once
#include "CoreMinimal.h"
#include "EInventoryFunctionalityType.generated.h"

UENUM(BlueprintType)
enum class EInventoryFunctionalityType : uint8 {
    Drop,
    Use,
    EquipUnequip,
};

