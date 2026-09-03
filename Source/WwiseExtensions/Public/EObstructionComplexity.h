#pragma once
#include "CoreMinimal.h"
#include "EObstructionComplexity.generated.h"

UENUM(BlueprintType)
enum class EObstructionComplexity : uint8 {
    SingleEmitterRay,
    MultipleEmitterRays,
};

