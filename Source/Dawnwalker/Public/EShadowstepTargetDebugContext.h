#pragma once
#include "CoreMinimal.h"
#include "EShadowstepTargetDebugContext.generated.h"

UENUM(BlueprintType)
enum class EShadowstepTargetDebugContext : uint8 {
    NoContext,
    ForbiddenSurface,
    AntiGravTransition,
    SnapToGround,
    NonTraversalVolume,
    TraversalHelperVolume,
    SqueezableGap,
    AntiGravNormalNotFound,
    InvalidFloor,
    Vines,
    BadCameraStart,
};

