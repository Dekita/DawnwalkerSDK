#pragma once
#include "CoreMinimal.h"
#include "ERebelSettingChangeMode.generated.h"

UENUM(BlueprintType)
enum class ERebelSettingChangeMode : uint8 {
    Regular,
    OverrideActivate,
    OverrideDeactivate,
    ResetToDefault,
    ForcedChange,
};

