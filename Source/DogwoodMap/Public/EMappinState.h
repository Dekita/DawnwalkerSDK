#pragma once
#include "CoreMinimal.h"
#include "EMappinState.generated.h"

UENUM(BlueprintType)
enum class EMappinState : uint8 {
    None,
    Locked,
    Invisible,
    Unknown,
    Regular,
    Completed,
};

