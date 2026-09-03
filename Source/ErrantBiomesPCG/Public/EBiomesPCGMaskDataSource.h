#pragma once
#include "CoreMinimal.h"
#include "EBiomesPCGMaskDataSource.generated.h"

UENUM(BlueprintType)
enum class EBiomesPCGMaskDataSource : uint8 {
    SpeciesGrowth,
    SpeciesScale,
    SpeciesGroup,
    SubBiome,
    SpeciesRotation,
};

