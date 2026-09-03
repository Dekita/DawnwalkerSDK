#pragma once
#include "CoreMinimal.h"
#include "EPopulationSpawnDistributionScope.generated.h"

UENUM()
enum class EPopulationSpawnDistributionScope : int32 {
    EntryGroup,
    Entry,
    Default = EntryGroup,
};

