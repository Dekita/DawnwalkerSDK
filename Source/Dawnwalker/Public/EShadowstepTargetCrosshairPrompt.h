#pragma once
#include "CoreMinimal.h"
#include "EShadowstepTargetCrosshairPrompt.generated.h"

UENUM(BlueprintType)
enum class EShadowstepTargetCrosshairPrompt : uint8 {
    None,
    OutOfReach,
    OutOfStamina,
};

