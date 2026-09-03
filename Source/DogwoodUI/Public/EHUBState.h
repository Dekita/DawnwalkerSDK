#pragma once
#include "CoreMinimal.h"
#include "EHUBState.generated.h"

UENUM(BlueprintType)
enum class EHUBState : uint8 {
    Inactive,
    Activating,
    Active,
};

