#pragma once
#include "CoreMinimal.h"
#include "EFocusActionConditionType.generated.h"

UENUM(BlueprintType)
enum class EFocusActionConditionType : uint8 {
    StartFocusMode,
    EndFocusMode,
    ActionCanceled,
    ActionSubmitted,
    ActionExecuted,
    PlanExecutionStarted,
    FocusTargetChanged,
    ChargedActionSlots,
    SpentActionSlots,
};

