#pragma once
#include "CoreMinimal.h"
#include "ETransformationSpace.generated.h"

UENUM(BlueprintType)
enum class ETransformationSpace : uint8 {
    Global,
    Local,
    Tangent,
    View,
};

