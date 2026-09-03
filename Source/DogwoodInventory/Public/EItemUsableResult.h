#pragma once
#include "CoreMinimal.h"
#include "EItemUsableResult.generated.h"

UENUM(BlueprintType)
enum class EItemUsableResult : uint8 {
    None,
    Usable,
    NotUsableDefault,
    IngredientsNotConsumable,
    ConsumableAsHumanOnly,
    ConsumableAsVampireOnly,
    LevelRequirementNotMet,
};

