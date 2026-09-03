#pragma once
#include "CoreMinimal.h"
#include "ECameraPopPolicy.generated.h"

UENUM(BlueprintType)
namespace ECameraPopPolicy {
    enum Type {
        PopOnBlendedOut,
        Manual,
        PopOnBlendedOutFromTop,
        Persistent,
    };
}

