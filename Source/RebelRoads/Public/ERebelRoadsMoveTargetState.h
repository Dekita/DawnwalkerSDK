#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsMoveTargetState.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsMoveTargetState : uint8 {
    Idle,
    WaitingForOthers,
    WaitingForTicket,
    Moving,
    Paused,
    Done,
};

