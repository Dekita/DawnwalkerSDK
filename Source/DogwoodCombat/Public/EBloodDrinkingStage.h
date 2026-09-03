#pragma once
#include "CoreMinimal.h"
#include "EBloodDrinkingStage.generated.h"

UENUM(BlueprintType)
enum class EBloodDrinkingStage : uint8 {
    None,
    BackAttack,
    Struggle,
    StruggleToBite,
    ShortDrinking,
    ShortDrinkingEnd,
    MediumDrinking,
    MediumDrinkingEnd,
    LongDrinking,
    LongDrinkingEnd,
    StruggleToEscape,
    Max,
};

