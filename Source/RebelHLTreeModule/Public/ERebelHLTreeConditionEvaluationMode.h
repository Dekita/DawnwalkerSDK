#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeConditionEvaluationMode.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeConditionEvaluationMode : uint8 {
    Evaluated,
    ForcedTrue,
    ForcedFalse,
};

