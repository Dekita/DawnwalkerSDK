#pragma once
#include "CoreMinimal.h"
#include "ENodeEventSectionPlaybackType.generated.h"

UENUM(BlueprintType)
enum class ENodeEventSectionPlaybackType : uint8 {
    Continue,
    Pause,
    Loop,
    MAX,
    None,
};

