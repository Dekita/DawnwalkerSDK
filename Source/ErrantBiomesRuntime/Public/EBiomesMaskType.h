#pragma once
#include "CoreMinimal.h"
#include "EBiomesMaskType.generated.h"

UENUM(BlueprintType)
enum class EBiomesMaskType : uint8 {
    Unknown,
    HandPaintedMask,
    BiomeMask,
    ErrantLandscapeMask,
    ErrantPathsMask,
    Custom,
    MAX,
};

