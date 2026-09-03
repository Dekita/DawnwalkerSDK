#pragma once
#include "CoreMinimal.h"
#include "AggregationPipelineSettings.h"
#include "NearStandinLightmapSettings.h"
#include "SimplygonStandinPipeline.h"
#include "StandinNearPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STANDINACTOR_API UStandinNearPipeline : public USimplygonStandinPipeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAggregationPipelineSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNearStandinLightmapSettings LightmapSettings;
    
    UStandinNearPipeline();

};

