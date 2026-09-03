#pragma once
#include "CoreMinimal.h"
#include "EInvestigationActiveState.generated.h"

UENUM(BlueprintType)
enum class EInvestigationActiveState : uint8 {
    Idle,
    Entering,
    Active,
    Leaving,
};

