#pragma once
#include "CoreMinimal.h"
#include "EUIAudioWidgetAction.generated.h"

UENUM(BlueprintType)
enum class EUIAudioWidgetAction : uint8 {
    None,
    Hover,
    Select,
    Change,
    Open,
    Close,
    Event,
    Confirm,
    Cancel,
};

