#pragma once
#include "CoreMinimal.h"
#include "ESenseConditionType.generated.h"

UENUM(BlueprintType)
enum class ESenseConditionType : uint8 {
    Heard,
    Sensed,
    HeardOrSensed,
};

