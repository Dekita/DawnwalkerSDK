#pragma once
#include "CoreMinimal.h"
#include "EBiomesMaskSampleResult.generated.h"

UENUM(BlueprintType)
enum class EBiomesMaskSampleResult : uint8 {
    Sampled,
    Awaiting,
    NothingFound,
};

