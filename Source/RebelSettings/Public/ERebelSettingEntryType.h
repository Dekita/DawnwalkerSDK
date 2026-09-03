#pragma once
#include "CoreMinimal.h"
#include "ERebelSettingEntryType.generated.h"

UENUM(BlueprintType)
enum class ERebelSettingEntryType : uint8 {
    Setting,
    Separator,
    Keybindings,
};

