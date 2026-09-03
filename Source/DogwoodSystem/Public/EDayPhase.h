#pragma once
#include "CoreMinimal.h"
#include "EDayPhase.generated.h"

UENUM(BlueprintType)
enum class EDayPhase : uint8 {
    None,
    Day,
    Night,
};

