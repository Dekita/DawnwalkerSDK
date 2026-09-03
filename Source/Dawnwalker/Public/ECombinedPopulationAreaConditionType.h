#pragma once
#include "CoreMinimal.h"
#include "ECombinedPopulationAreaConditionType.generated.h"

UENUM(BlueprintType)
enum class ECombinedPopulationAreaConditionType : uint8 {
    Unknown,
    PlayerInsideOrEnters,
    PlayerOutsideOrExits,
};

