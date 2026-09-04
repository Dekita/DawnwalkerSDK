#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeConditionOperand.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeConditionOperand : uint8 {
    Copy,
    And,
    Or,
};

