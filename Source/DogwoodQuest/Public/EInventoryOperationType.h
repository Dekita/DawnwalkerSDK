#pragma once
#include "CoreMinimal.h"
#include "EInventoryOperationType.generated.h"

UENUM(BlueprintType)
enum class EInventoryOperationType : uint8 {
    AddItem,
    RemoveItem,
};

