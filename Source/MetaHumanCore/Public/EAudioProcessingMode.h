#pragma once
#include "CoreMinimal.h"
#include "EAudioProcessingMode.generated.h"

UENUM(BlueprintType)
enum class EAudioProcessingMode : uint8 {
    Undefined,
    FullFace,
    TongueTracking,
};

