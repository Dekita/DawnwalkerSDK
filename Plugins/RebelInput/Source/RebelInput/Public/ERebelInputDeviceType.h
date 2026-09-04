#pragma once
#include "CoreMinimal.h"
#include "ERebelInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class ERebelInputDeviceType : uint8 {
    Invalid,
    KeyboardMouse,
    Gamepad,
};

