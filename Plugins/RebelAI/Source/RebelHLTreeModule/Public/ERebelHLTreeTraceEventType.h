#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeTraceEventType.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeTraceEventType : uint8 {
    Unset,
    OnEntering,
    OnEntered,
    OnExiting,
    OnExited,
    Push,
    Pop,
    OnStateSelected,
    OnStateCompleted,
    OnTicking,
    OnTaskCompleted,
    OnTicked,
    Passed,
    Failed,
    ForcedSuccess,
    ForcedFailure,
    InternalForcedFailure,
    OnEvaluating,
    OnTransition,
    OnTreeStarted,
    OnTreeStopped,
};

