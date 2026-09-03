#pragma once
#include "CoreMinimal.h"
#include "EIdentityPoseType.generated.h"

UENUM(BlueprintType)
enum class EIdentityPoseType : uint8 {
    Invalid,
    Neutral,
    Teeth,
    Custom,
    Count,
};

