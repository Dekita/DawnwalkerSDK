#pragma once
#include "CoreMinimal.h"
#include "EObjectiveDayPhase.generated.h"

UENUM(BlueprintType)
enum class EObjectiveDayPhase : uint8 {
    DayAndNight,
    Day,
    Night,
};

