#pragma once
#include "CoreMinimal.h"
#include "EDawnwalkerClawRideState.generated.h"

UENUM(BlueprintType)
enum class EDawnwalkerClawRideState : uint8 {
    Undefined,
    Ready,
    Busy,
    Exiting,
    Landing,
    FallingFromLedge,
    FallingFromLedgeBusy,
    StartFromLedgeFalling,
    LedgeStartTransition,
    AntiGravPossible,
    ToAntiGravTransition,
    LandTransition,
    ClimbTransition,
    DropTransition,
    JumpAwayTransition,
    ClawRidePossible,
    ClawRideStartBusy,
    ClawRideStartTransition,
};

