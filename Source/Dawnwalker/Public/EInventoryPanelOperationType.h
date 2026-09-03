#pragma once
#include "CoreMinimal.h"
#include "EInventoryPanelOperationType.generated.h"

UENUM(BlueprintType)
enum class EInventoryPanelOperationType : uint8 {
    EnableFunctionalities,
    LockFunctionalities,
    EnableAllFunctionalitiesExcept,
    LockAllFunctionalitiesExcept,
};

