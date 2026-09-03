#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeUpdatePhase.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeUpdatePhase : uint8 {
    Unset,
    StartTree,
    StopTree,
    StartGlobalTasks,
    StopGlobalTasks,
    TickRebelHLTree,
    ApplyTransitions,
    TriggerTransitions,
    TickingGlobalTasks,
    TickingTasks,
    TransitionConditions,
    StateSelection,
    TrySelectBehavior,
    EnterConditions,
    EnterStates,
    ExitStates,
    StateCompleted,
};

