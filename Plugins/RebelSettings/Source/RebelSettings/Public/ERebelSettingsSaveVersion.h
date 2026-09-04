#pragma once
#include "CoreMinimal.h"
#include "ERebelSettingsSaveVersion.generated.h"

UENUM(BlueprintType)
enum class ERebelSettingsSaveVersion : uint8 {
    Invalid,
    InitialRelease,
};

