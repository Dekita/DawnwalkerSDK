#pragma once
#include "CoreMinimal.h"
#include "HighDensityMeshReductionPipelineSettings.h"
#include "SimplygonPipeline.h"
#include "HighDensityMeshReductionPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UHighDensityMeshReductionPipeline : public USimplygonPipeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighDensityMeshReductionPipelineSettings Settings;
    
    UHighDensityMeshReductionPipeline();

};

