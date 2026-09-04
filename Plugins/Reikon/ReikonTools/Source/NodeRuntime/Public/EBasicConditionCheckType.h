#pragma once
#include "CoreMinimal.h"
#include "EBasicConditionCheckType.generated.h"

UENUM(BlueprintType)
enum class EBasicConditionCheckType : uint8 {
    EVCT_Greater,
    EVCT_Less,
};

