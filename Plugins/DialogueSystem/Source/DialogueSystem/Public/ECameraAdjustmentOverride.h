#pragma once
#include "CoreMinimal.h"
#include "ECameraAdjustmentOverride.generated.h"

UENUM(BlueprintType)
enum class ECameraAdjustmentOverride : uint8 {
    None,
    NoAdjustment,
    AllLocked,
    AllAuto,
};

