#pragma once
#include "CoreMinimal.h"
#include "EHyprsenseRealtimeNodeDebugImage.generated.h"

UENUM(BlueprintType)
enum class EHyprsenseRealtimeNodeDebugImage : uint8 {
    None,
    Input,
    FaceDetect,
    Headpose,
    Trackers,
    Solver,
};

