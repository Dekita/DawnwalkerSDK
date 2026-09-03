#pragma once
#include "CoreMinimal.h"
#include "EDWAntiGravModeStatus.generated.h"

UENUM(BlueprintType)
enum class EDWAntiGravModeStatus : uint8 {
    Undefined,
    Ready,
    Busy,
    NotAntiGravableSurface,
    NoSurfaceHit,
    AntiGravableSurface,
    Transition,
};

