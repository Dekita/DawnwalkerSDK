#pragma once
#include "CoreMinimal.h"
#include "EDawnwalkerShadowstepAimingState.generated.h"

UENUM(BlueprintType)
enum class EDawnwalkerShadowstepAimingState : uint8 {
    Invalid,
    Busy,
    Ready,
};

