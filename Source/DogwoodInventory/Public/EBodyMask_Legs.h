#pragma once
#include "CoreMinimal.h"
#include "EBodyMask_Legs.generated.h"

UENUM(BlueprintType)
enum class EBodyMask_Legs : uint8 {
    Invalid,
    LeftThigh,
    LeftKnee,
    LeftCalf = 4,
    LeftFoot = 8,
    RightThigh = 16,
    RightKnee = 32,
    RightCalf = 64,
    RightFoot = 128,
};

