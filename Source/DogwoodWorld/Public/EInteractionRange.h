#pragma once
#include "CoreMinimal.h"
#include "EInteractionRange.generated.h"

UENUM(BlueprintType)
enum class EInteractionRange : uint8 {
    Close,
    Medium,
    Far,
    Farther,
    Farthest,
    FartherThanFarthest,
};

