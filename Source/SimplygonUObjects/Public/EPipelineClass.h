#pragma once
#include "CoreMinimal.h"
#include "EPipelineClass.generated.h"

UENUM(BlueprintType)
enum class EPipelineClass : uint8 {
    Invalid,
    ReductionPipeline,
    RemeshingPipeline,
    AggregationPipeline,
    BillboardCloudPipeline,
    BillboardCloudVegetationPipeline,
    FlipbookPipeline,
    ImpostorFromSingleViewPipeline,
    HighDensityMeshReductionPipeline,
};

