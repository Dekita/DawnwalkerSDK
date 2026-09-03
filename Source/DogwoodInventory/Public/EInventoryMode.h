#pragma once
#include "CoreMinimal.h"
#include "EInventoryMode.generated.h"

UENUM(BlueprintType)
enum class EInventoryMode : uint8 {
    Inventory,
    Looting,
    Buy,
    Storage,
    Crafting,
    IngredientList,
    Medic,
    Sell,
};

