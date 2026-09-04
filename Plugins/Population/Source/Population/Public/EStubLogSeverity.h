#pragma once
#include "CoreMinimal.h"
#include "EStubLogSeverity.generated.h"

UENUM(BlueprintType)
enum class EStubLogSeverity : uint8 {
    Message,
    Warning,
    Error,
};

