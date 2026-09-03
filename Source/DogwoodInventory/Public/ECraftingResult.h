#pragma once
#include "CoreMinimal.h"
#include "ECraftingResult.generated.h"

UENUM(BlueprintType)
enum class ECraftingResult : uint8 {
    None,
    Success,
    Failure,
    NotEnoughIngredients,
    ItemNotCraftable,
    NotEnoughSpace,
    RecipeLocked,
    CraftingLimitReached,
};

