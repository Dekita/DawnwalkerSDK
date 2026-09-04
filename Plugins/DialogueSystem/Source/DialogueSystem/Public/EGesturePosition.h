#pragma once
#include "CoreMinimal.h"
#include "EGesturePosition.generated.h"

UENUM(BlueprintType)
enum class EGesturePosition : uint8 {
    MatchAudio,
    StartOffset,
    EndOffset,
};

