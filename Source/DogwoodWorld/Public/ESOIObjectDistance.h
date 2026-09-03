#pragma once
#include "CoreMinimal.h"
#include "ESOIObjectDistance.generated.h"

UENUM(BlueprintType)
enum class ESOIObjectDistance : uint8 {
    Close,
    Medium,
    Far,
};

