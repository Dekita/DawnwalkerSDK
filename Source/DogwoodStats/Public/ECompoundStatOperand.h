#pragma once
#include "CoreMinimal.h"
#include "ECompoundStatOperand.generated.h"

UENUM(BlueprintType)
enum class ECompoundStatOperand : uint8 {
    Add,
    Subtract,
    Multiply,
};

