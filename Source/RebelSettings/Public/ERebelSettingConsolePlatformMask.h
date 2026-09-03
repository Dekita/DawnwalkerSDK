#pragma once
#include "CoreMinimal.h"
#include "ERebelSettingConsolePlatformMask.generated.h"

UENUM(BlueprintType)
enum class ERebelSettingConsolePlatformMask : uint8 {
    None,
    XSS,
    XSX,
    PS5 = 4,
    PS5Pro = 8,
};

