#pragma once
#include "CoreMinimal.h"
#include "EConditionCheckType.generated.h"

UENUM(BlueprintType)
enum class EConditionCheckType : uint8 {
    EVCT_Greater,
    EVCT_GreaterEqual,
    EVCT_Equal,
    EVCT_LessEqual,
    EVCT_Less,
};

