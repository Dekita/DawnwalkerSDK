#pragma once
#include "CoreMinimal.h"
#include "EDayPhaseCondition.generated.h"

UENUM(BlueprintType)
enum class EDayPhaseCondition : uint8 {
    BothDayAndNight,
    OnlyDay,
    OnlyNight,
};

