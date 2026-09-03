#pragma once
#include "CoreMinimal.h"
#include "EDamageCharacterMode.generated.h"

UENUM(BlueprintType)
enum class EDamageCharacterMode : uint8 {
    FlatValue,
    PercentOfMaxHealth,
    PercentOfCurrentHealth,
};

