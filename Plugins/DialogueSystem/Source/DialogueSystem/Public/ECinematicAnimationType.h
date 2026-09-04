#pragma once
#include "CoreMinimal.h"
#include "ECinematicAnimationType.generated.h"

UENUM(BlueprintType)
enum class ECinematicAnimationType : uint8 {
    None,
    Emotion,
    Idle,
    Gesture,
    WalkIn,
    WalkOut,
};

