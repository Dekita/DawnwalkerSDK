#pragma once
#include "CoreMinimal.h"
#include "EFrameAnimationQuality.generated.h"

UENUM(BlueprintType)
enum class EFrameAnimationQuality : uint8 {
    Undefined,
    Preview,
    Final,
    PostFiltered,
};

