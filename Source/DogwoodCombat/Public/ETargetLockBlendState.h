#pragma once
#include "CoreMinimal.h"
#include "ETargetLockBlendState.generated.h"

UENUM(BlueprintType)
enum class ETargetLockBlendState : uint8 {
    NoLock,
    BlendIn,
    TargetLock,
    BlendOut,
};

