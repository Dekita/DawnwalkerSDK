#pragma once
#include "CoreMinimal.h"
#include "ERebelSettingControlType.generated.h"

UENUM(BlueprintType)
enum class ERebelSettingControlType : uint8 {
    Invalid,
    Slider,
    Picker,
    Binding,
    Custom,
};

