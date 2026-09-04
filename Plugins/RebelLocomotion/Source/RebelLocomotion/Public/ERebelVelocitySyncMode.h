#pragma once
#include "CoreMinimal.h"
#include "ERebelVelocitySyncMode.generated.h"

UENUM(BlueprintType)
enum class ERebelVelocitySyncMode : uint8 {
    AnimDriven,
    SpeedAnimDriven,
    None,
};

