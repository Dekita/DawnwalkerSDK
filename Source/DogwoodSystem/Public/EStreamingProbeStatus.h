#pragma once
#include "CoreMinimal.h"
#include "EStreamingProbeStatus.generated.h"

UENUM(BlueprintType)
enum class EStreamingProbeStatus : uint8 {
    None,
    Busy,
    Ready,
};

