#pragma once
#include "CoreMinimal.h"
#include "EActiveAbilitiesPanelOperationType.generated.h"

UENUM(BlueprintType)
enum class EActiveAbilitiesPanelOperationType : uint8 {
    EnableFunctionalities,
    LockFunctionalities,
    EnableAllFunctionalitiesExcept,
    LockAllFunctionalitiesExcept,
};

