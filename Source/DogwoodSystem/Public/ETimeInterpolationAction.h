#pragma once
#include "CoreMinimal.h"
#include "ETimeInterpolationAction.generated.h"

UENUM(BlueprintType)
enum class ETimeInterpolationAction : uint8 {
    Started,
    Finished,
};

