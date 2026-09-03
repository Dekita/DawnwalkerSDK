#pragma once
#include "CoreMinimal.h"
#include "EInteractionConditionType.generated.h"

UENUM(BlueprintType)
enum class EInteractionConditionType : uint8 {
    Started,
    Ended,
    Triggered,
};

