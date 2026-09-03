#pragma once
#include "CoreMinimal.h"
#include "EHoudiniEngineEditorSettingUseCustomLocation.generated.h"

UENUM(BlueprintType)
enum class EHoudiniEngineEditorSettingUseCustomLocation : uint8 {
    Project,
    Disabled,
    Enabled,
};

