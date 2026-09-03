#pragma once
#include "CoreMinimal.h"
#include "EQuickslot.generated.h"

UENUM(BlueprintType)
enum class EQuickslot : uint8 {
    Left,
    Top,
    Right,
    Bottom,
    Max = Bottom,
};

