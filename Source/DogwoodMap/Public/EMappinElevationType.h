#pragma once
#include "CoreMinimal.h"
#include "EMappinElevationType.generated.h"

UENUM(BlueprintType)
enum class EMappinElevationType : uint8 {
    Above,
    Below,
    None,
};

