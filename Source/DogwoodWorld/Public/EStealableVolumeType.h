#pragma once
#include "CoreMinimal.h"
#include "EStealableVolumeType.generated.h"

UENUM(BlueprintType)
enum class EStealableVolumeType : uint8 {
    SetStealable,
    IgnoreStealable,
};

