#pragma once
#include "CoreMinimal.h"
#include "EDawnwalkerTraversalStateVariable.generated.h"

UENUM(BlueprintType)
enum class EDawnwalkerTraversalStateVariable : uint8 {
    LedgeDistance,
    LedgeHeight,
    ActorLedgeAngle,
    InputLedgeAngle,
    ActorImpactAngle,
    SlideAngle,
    StopDistance,
    JumpOverDistance,
    EnterAngleToAP,
    Speed,
    VerticalSpeed,
    InputValue,
    InputSize,
    AdditiveSlideSpeedGravitySpace,
    AdditiveSlideVerticalSpeedGravitySpace,
    SlideDownMomentumTimeLeft,
    Max,
};

