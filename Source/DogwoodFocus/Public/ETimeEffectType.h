#pragma once
#include "CoreMinimal.h"
#include "ETimeEffectType.generated.h"

UENUM(BlueprintType)
enum class ETimeEffectType : uint8 {
    SmoothDrain,
    FlurryInterval,
};

