#pragma once
#include "CoreMinimal.h"
#include "EDawnwalkerShadowstepTargetState.generated.h"

UENUM(BlueprintType)
enum class EDawnwalkerShadowstepTargetState : uint8 {
    Undefined,
    Normal,
    SnapBehind,
    AntiGrav,
    CannotSnapBehind,
    OutOfReach,
    InvalidTarget,
    ForbiddenSurface,
};

