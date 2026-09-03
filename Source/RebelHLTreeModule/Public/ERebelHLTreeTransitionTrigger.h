#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeTransitionTrigger.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeTransitionTrigger : uint8 {
    None,
    OnStateCompleted = 3,
    OnStateSucceeded = 1,
    OnStateFailed,
    OnTick = 4,
    OnEvent = 8,
    MAX,
};

