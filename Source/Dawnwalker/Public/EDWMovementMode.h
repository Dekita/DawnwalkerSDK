#pragma once
#include "CoreMinimal.h"
#include "EDWMovementMode.generated.h"

UENUM(BlueprintType)
enum class EDWMovementMode : uint8 {
    GapSqueeze,
    Climbing,
};

