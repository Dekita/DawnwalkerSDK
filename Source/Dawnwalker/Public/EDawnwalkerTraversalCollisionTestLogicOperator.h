#pragma once
#include "CoreMinimal.h"
#include "EDawnwalkerTraversalCollisionTestLogicOperator.generated.h"

UENUM(BlueprintType)
enum class EDawnwalkerTraversalCollisionTestLogicOperator : uint8 {
    Any,
    All,
    None,
};

