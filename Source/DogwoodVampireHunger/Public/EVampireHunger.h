#pragma once
#include "CoreMinimal.h"
#include "EVampireHunger.generated.h"

UENUM(BlueprintType)
enum class EVampireHunger : uint8 {
    Low,
    Medium,
    High,
    Max,
};

