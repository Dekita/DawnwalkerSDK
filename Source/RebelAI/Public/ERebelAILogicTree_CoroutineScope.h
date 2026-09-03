#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicTree_CoroutineScope.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicTree_CoroutineScope : uint8 {
    Service,
    Phase,
    Behavior,
    Scope,
    Unset,
};

