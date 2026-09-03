#pragma once
#include "CoreMinimal.h"
#include "EGapSqueezeMovementState.generated.h"

UENUM(BlueprintType)
enum class EGapSqueezeMovementState : uint8 {
    None,
    Entering,
    Squeezing,
    LeavingForward,
    LeavingBackward,
};

