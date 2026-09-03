#pragma once
#include "CoreMinimal.h"
#include "EActionPointNotifyType.generated.h"

UENUM(BlueprintType)
enum class EActionPointNotifyType : uint8 {
    FocusModeStart,
    FocusModeEnd,
    ActionSubmit,
    ActionExecute,
    ActionCancel,
};

