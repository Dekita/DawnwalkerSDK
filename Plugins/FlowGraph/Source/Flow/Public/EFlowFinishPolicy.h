#pragma once
#include "CoreMinimal.h"
#include "EFlowFinishPolicy.generated.h"

UENUM(BlueprintType)
enum class EFlowFinishPolicy : uint8 {
    Keep,
    Abort,
};

