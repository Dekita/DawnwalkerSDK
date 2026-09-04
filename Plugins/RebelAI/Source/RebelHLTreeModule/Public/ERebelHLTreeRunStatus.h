#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeRunStatus.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeRunStatus : uint8 {
    Running,
    Failed,
    Succeeded,
    Stopped,
    Unset,
};

