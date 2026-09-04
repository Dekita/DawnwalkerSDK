#pragma once
#include "CoreMinimal.h"
#include "EFlowTagContainerMatchType.generated.h"

UENUM(BlueprintType)
enum class EFlowTagContainerMatchType : uint8 {
    HasAny,
    HasAnyExact,
    HasAll,
    HasAllExact,
};

