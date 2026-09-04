#pragma once
#include "CoreMinimal.h"
#include "EChoiceAvailability.generated.h"

UENUM(BlueprintType)
enum class EChoiceAvailability : uint8 {
    Unlocked,
    Locked,
    Hidden,
};

