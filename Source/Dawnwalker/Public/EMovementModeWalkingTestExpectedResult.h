#pragma once
#include "CoreMinimal.h"
#include "EMovementModeWalkingTestExpectedResult.generated.h"

UENUM(BlueprintType)
enum class EMovementModeWalkingTestExpectedResult : uint8 {
    OnTheGround,
    OffTheGround,
};

