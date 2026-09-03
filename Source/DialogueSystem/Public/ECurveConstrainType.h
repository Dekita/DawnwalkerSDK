#pragma once
#include "CoreMinimal.h"
#include "ECurveConstrainType.generated.h"

UENUM(BlueprintType)
enum class ECurveConstrainType : uint8 {
    Any,
    All,
    Cumulative,
};

