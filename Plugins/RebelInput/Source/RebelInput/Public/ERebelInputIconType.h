#pragma once
#include "CoreMinimal.h"
#include "ERebelInputIconType.generated.h"

UENUM(BlueprintType)
enum class ERebelInputIconType : uint8 {
    KeyboardMouse,
    GenericGamepad,
    SonyDualSense,
    MicrosoftXbox,
};

