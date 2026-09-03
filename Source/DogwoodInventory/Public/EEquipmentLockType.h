#pragma once
#include "CoreMinimal.h"
#include "EEquipmentLockType.generated.h"

UENUM(BlueprintType)
enum class EEquipmentLockType : uint8 {
    None,
    Generic,
    Combat,
};

