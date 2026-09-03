#pragma once
#include "CoreMinimal.h"
#include "EFlowNetMode.generated.h"

UENUM(BlueprintType)
enum class EFlowNetMode : uint8 {
    Any,
    Authority,
    ClientOnly,
    ServerOnly,
    SinglePlayerOnly,
};

