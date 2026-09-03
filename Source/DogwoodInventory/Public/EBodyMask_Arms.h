#pragma once
#include "CoreMinimal.h"
#include "EBodyMask_Arms.generated.h"

UENUM(BlueprintType)
enum class EBodyMask_Arms : uint8 {
    Invalid,
    LeftShoulder,
    LeftBicep,
    LeftForearm = 4,
    LeftHand = 8,
    RightShoulder = 16,
    RightBicep = 32,
    RightForearm = 64,
    RightHand = 128,
};

