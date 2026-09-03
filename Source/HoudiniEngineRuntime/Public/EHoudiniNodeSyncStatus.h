#pragma once
#include "CoreMinimal.h"
#include "EHoudiniNodeSyncStatus.generated.h"

UENUM(BlueprintType)
enum class EHoudiniNodeSyncStatus : uint8 {
    None,
    Failed,
    Success,
    SuccessWithErrors,
    Running,
    Warning,
};

