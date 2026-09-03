#pragma once
#include "CoreMinimal.h"
#include "EFocusModeConditionType.generated.h"

UENUM(BlueprintType)
enum class EFocusModeConditionType : uint8 {
    Unknown,
    IsActive,
    IsNotActive,
    Enter,
    Exit,
};

