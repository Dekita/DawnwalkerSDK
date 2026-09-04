#pragma once
#include "CoreMinimal.h"
#include "ECinematicIdleType.generated.h"

UENUM(BlueprintType)
enum class ECinematicIdleType : uint8 {
    Idle,
    IdleOverlay,
    FaceIdle,
    FaceIdleOverlay,
    EyeIdle,
};

