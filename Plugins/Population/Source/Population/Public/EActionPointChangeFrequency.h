#pragma once
#include "CoreMinimal.h"
#include "EActionPointChangeFrequency.generated.h"

UENUM(BlueprintType)
enum class EActionPointChangeFrequency : uint8 {
    Never,
    Infrequent,
    Default,
    Frequent,
    AfterEachLoop,
    Random,
};

