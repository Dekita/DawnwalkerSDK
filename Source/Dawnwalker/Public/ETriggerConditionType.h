#pragma once
#include "CoreMinimal.h"
#include "ETriggerConditionType.generated.h"

UENUM(BlueprintType)
enum class ETriggerConditionType : uint8 {
    Unknown,
    IsInside,
    IsOutside,
    Enter,
    Exit,
};

