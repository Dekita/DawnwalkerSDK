#pragma once
#include "CoreMinimal.h"
#include "EActionFragment_FilterOperator.generated.h"

UENUM(BlueprintType)
enum class EActionFragment_FilterOperator : uint8 {
    OR,
    AND,
};

