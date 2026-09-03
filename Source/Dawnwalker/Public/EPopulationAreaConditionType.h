#pragma once
#include "CoreMinimal.h"
#include "EPopulationAreaConditionType.generated.h"

UENUM(BlueprintType)
enum class EPopulationAreaConditionType : uint8 {
    Unknown,
    PlayerInside,
    PlayerOutside,
    PlayerEnters,
    PlayerExits,
};

