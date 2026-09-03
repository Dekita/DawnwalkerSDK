#pragma once
#include "CoreMinimal.h"
#include "AggregationPipelineSettings.h"
#include "SimplygonPipeline.h"
#include "AggregationPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UAggregationPipeline : public USimplygonPipeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAggregationPipelineSettings Settings;
    
    UAggregationPipeline();

};

