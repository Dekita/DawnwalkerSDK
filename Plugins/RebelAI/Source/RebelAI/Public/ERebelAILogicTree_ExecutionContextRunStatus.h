#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicTree_ExecutionContextRunStatus.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicTree_ExecutionContextRunStatus : uint8 {
    Unset,
    Running,
    Completed,
    Stopped,
};

