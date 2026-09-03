#pragma once
#include "CoreMinimal.h"
#include "EPopulationDayPhaseActivity.generated.h"

UENUM(BlueprintType)
enum class EPopulationDayPhaseActivity : uint8 {
    BothDayAndNight,
    OnlyDay,
    OnlyNight,
};

