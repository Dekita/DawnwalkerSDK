#pragma once
#include "CoreMinimal.h"
#include "ECameraAdjustmentMode.generated.h"

UENUM(BlueprintType)
enum class ECameraAdjustmentMode : uint8 {
    None,
    Locked,
    Auto,
};

