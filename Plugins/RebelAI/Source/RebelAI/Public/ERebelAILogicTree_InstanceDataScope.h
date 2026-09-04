#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicTree_InstanceDataScope.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicTree_InstanceDataScope : uint8 {
    StackFrame,
    ParentScope,
    ExecutionContext,
    Behavior,
    Phase,
    Service,
};

