#pragma once
#include "CoreMinimal.h"
#include "ECombinedTriggerConditionType.generated.h"

UENUM(BlueprintType)
enum class ECombinedTriggerConditionType : uint8 {
    Unknown,
    IsInsideOrEnter,
    IsOutsideOrExit,
};

