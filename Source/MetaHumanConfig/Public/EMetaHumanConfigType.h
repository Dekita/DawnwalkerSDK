#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanConfigType.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanConfigType : uint8 {
    Unspecified,
    Solver,
    Fitting,
    PredictiveSolver,
};

