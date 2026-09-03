#pragma once
#include "CoreMinimal.h"
#include "ECameraPushPolicy.generated.h"

UENUM(BlueprintType)
namespace ECameraPushPolicy {
    enum Type {
        Always,
        WhenHighestPriority,
    };
}

