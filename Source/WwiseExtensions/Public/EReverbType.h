#pragma once
#include "CoreMinimal.h"
#include "EReverbType.generated.h"

UENUM(BlueprintType)
enum class EReverbType : uint8 {
    WwiseSpatialAudioReverb,
    SimpleReverb,
    AcousticsReverb,
};

