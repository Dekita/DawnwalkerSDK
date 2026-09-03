#pragma once
#include "CoreMinimal.h"
#include "ETransitionTargetPhase.generated.h"

UENUM(BlueprintType)
enum class ETransitionTargetPhase : uint8 {
    Both,
    Day,
    Night,
};

