#pragma once
#include "CoreMinimal.h"
#include "ELogicalOperationType.generated.h"

UENUM(BlueprintType)
enum class ELogicalOperationType : uint8 {
    AND,
    OR,
    XOR,
    NAND,
    NOR,
    NXOR,
};

