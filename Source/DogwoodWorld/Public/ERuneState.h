#pragma once
#include "CoreMinimal.h"
#include "ERuneState.generated.h"

UENUM(BlueprintType)
enum class ERuneState : uint8 {
    Disabled,
    Active,
    Dispelled,
};

