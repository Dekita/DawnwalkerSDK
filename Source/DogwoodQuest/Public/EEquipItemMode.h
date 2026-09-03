#pragma once
#include "CoreMinimal.h"
#include "EEquipItemMode.generated.h"

UENUM(BlueprintType)
enum class EEquipItemMode : uint8 {
    AddMissingAndEquip,
    EquipOnlyIfInInventory,
};

