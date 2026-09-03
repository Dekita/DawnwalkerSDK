#pragma once
#include "CoreMinimal.h"
#include "ERebelFoliageMetadataTypeErrantBridge.generated.h"

UENUM(BlueprintType)
enum class ERebelFoliageMetadataTypeErrantBridge : uint8 {
    None,
    Deciduous,
    Coniferous,
    Grassy,
    Branchy,
    TRAVERSABLE = 128,
    Deciduous_Traversable,
    Coniferous_Traversable,
    Grassy_Traversable,
    Branchy_Traversable,
    MAX,
};

