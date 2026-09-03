#pragma once
#include "CoreMinimal.h"
#include "EDawnwalkerAntiGravTransitionType.generated.h"

UENUM(BlueprintType)
enum class EDawnwalkerAntiGravTransitionType : uint8 {
    NoTransition,
    ClosestValid,
    OutsideCorner,
    InsideCorner,
    OutsideRoof,
    InsideGround,
    OutsideCeiling,
    InsideCeiling,
    Failure,
};

