#pragma once
#include "CoreMinimal.h"
#include "ELookAtType.generated.h"

UENUM(BlueprintType)
enum class ELookAtType : uint8 {
    None,
    Eyes,
    Neck,
    UpperBody,
};

