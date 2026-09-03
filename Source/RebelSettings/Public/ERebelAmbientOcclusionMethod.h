#pragma once
#include "CoreMinimal.h"
#include "ERebelAmbientOcclusionMethod.generated.h"

UENUM(BlueprintType)
enum class ERebelAmbientOcclusionMethod : uint8 {
    ScreenSpaceAmbientOcclusion,
    DistanceFieldAmbientOcclusion,
};

