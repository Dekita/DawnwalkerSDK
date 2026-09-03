#pragma once
#include "CoreMinimal.h"
#include "EItemEditorProperty.generated.h"

UENUM(BlueprintType)
enum class EItemEditorProperty : uint8 {
    None,
    IsRarityEditable,
    IsIngredientStatusEditable,
};

