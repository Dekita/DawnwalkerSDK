#pragma once
#include "CoreMinimal.h"
#include "EGameplayCameraInstancingPolicy.generated.h"

UENUM(BlueprintType)
namespace EGameplayCameraInstancingPolicy {
    enum Type {
        InstancedPerUse,
        NonInstanced,
    };
}

