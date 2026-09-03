#pragma once
#include "CoreMinimal.h"
#include "EEquipmentConditionType.generated.h"

UENUM(BlueprintType)
enum class EEquipmentConditionType : uint8 {
    AllSlotsMatch,
    AnySlotsMatch,
    NoSlotsMatch,
};

