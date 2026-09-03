#pragma once
#include "CoreMinimal.h"
#include "EMappinDayPhaseType.generated.h"

UENUM(BlueprintType)
enum class EMappinDayPhaseType : uint8 {
    Day,
    Night,
    None,
};

