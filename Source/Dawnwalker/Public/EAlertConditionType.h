#pragma once
#include "CoreMinimal.h"
#include "EAlertConditionType.generated.h"

UENUM(BlueprintType)
enum class EAlertConditionType : uint8 {
    Level,
    Bars,
    Stage,
};

