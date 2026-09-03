#pragma once
#include "CoreMinimal.h"
#include "EHUDPresetMode.generated.h"

UENUM(BlueprintType)
enum class EHUDPresetMode : uint8 {
    ShowAllExcept,
    HideAllExcept,
};

