#pragma once
#include "CoreMinimal.h"
#include "EConditionTestType.generated.h"

UENUM(BlueprintType)
enum class EConditionTestType : uint8 {
    ECTT_AbsoluteValue,
    ECCT_Percentage,
};

