#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeBreakpointType.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeBreakpointType : uint8 {
    Unset,
    OnEnter,
    OnExit,
    OnTransition,
};

