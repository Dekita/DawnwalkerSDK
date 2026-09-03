#pragma once
#include "CoreMinimal.h"
#include "EDismemberLimb.generated.h"

UENUM(BlueprintType)
enum class EDismemberLimb : uint8 {
    Head,
    LeftHand,
    RightHand,
    LeftLeg,
    RightLeg,
};

