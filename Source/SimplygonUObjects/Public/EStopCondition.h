#pragma once
#include "CoreMinimal.h"
#include "EStopCondition.generated.h"

UENUM(BlueprintType)
enum class EStopCondition : uint8 {
    Any,
    All,
};

