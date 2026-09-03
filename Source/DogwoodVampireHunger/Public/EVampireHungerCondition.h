#pragma once
#include "CoreMinimal.h"
#include "EVampireHungerCondition.generated.h"

UENUM(BlueprintType)
enum class EVampireHungerCondition : uint8 {
    AtLeast,
    Below,
};

