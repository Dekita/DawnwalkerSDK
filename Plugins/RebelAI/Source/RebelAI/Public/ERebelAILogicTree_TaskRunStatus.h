#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicTree_TaskRunStatus.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicTree_TaskRunStatus : uint8 {
    Running,
    Failed,
    Succeeded,
    Stopped,
    Skipped,
    Suspended,
    Sleep,
    Unset,
};

