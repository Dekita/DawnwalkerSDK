#pragma once
#include "CoreMinimal.h"
#include "EBiomesGroupInstances.generated.h"

UENUM(BlueprintType)
enum class EBiomesGroupInstances : uint8 {
    Always,
    WhenMoreThenThreshold,
    Never,
};

