#pragma once
#include "CoreMinimal.h"
#include "ELadderMovementState.generated.h"

UENUM(BlueprintType)
enum class ELadderMovementState : uint8 {
    None,
    CheckEnter,
    Entering,
    Climbing,
    LeavingUp,
    LeavingDown,
    Jump,
};

