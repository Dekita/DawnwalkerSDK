#pragma once
#include "CoreMinimal.h"
#include "EInputDirection.generated.h"

UENUM(BlueprintType)
enum class EInputDirection : uint8 {
    None,
    Forward,
    Back,
    Left = 4,
    Right = 8,
};

