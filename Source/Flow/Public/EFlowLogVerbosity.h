#pragma once
#include "CoreMinimal.h"
#include "EFlowLogVerbosity.generated.h"

UENUM(BlueprintType)
enum class EFlowLogVerbosity : uint8 {
    Error,
    Warning,
    Display,
    Log,
    Verbose,
    VeryVerbose,
};

