#pragma once
#include "CoreMinimal.h"
#include "EFlowNodeState.generated.h"

UENUM(BlueprintType)
enum class EFlowNodeState : uint8 {
    NeverActivated,
    Active,
    Completed,
    Aborted,
};

