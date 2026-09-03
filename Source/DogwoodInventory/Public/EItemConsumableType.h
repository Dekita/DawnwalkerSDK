#pragma once
#include "CoreMinimal.h"
#include "EItemConsumableType.generated.h"

UENUM(BlueprintType)
enum class EItemConsumableType : uint8 {
    Human,
    Vampire,
    Shared,
};

