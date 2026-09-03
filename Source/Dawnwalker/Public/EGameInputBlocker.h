#pragma once
#include "CoreMinimal.h"
#include "EGameInputBlocker.generated.h"

UENUM(BlueprintType)
enum class EGameInputBlocker : uint8 {
    None,
    Dialogue,
    VideoPlayback,
    UI = 4,
};

