#pragma once
#include "CoreMinimal.h"
#include "EPlayRateType.generated.h"

UENUM(BlueprintType)
enum class EPlayRateType : uint8 {
    Attack,
    Reaction,
    ParryBlockReaction,
    Dodge,
};

