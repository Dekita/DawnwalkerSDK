#pragma once
#include "CoreMinimal.h"
#include "EFailedNodeLogLevel.generated.h"

UENUM(BlueprintType)
enum class EFailedNodeLogLevel : uint8 {
    Warning,
    Error,
};

