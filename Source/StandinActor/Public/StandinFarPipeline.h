#pragma once
#include "CoreMinimal.h"
#include "RemeshingPipelineSettings.h"
#include "SimplygonStandinPipeline.h"
#include "StandinLightmapSettings.h"
#include "StandinFarPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STANDINACTOR_API UStandinFarPipeline : public USimplygonStandinPipeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemeshingPipelineSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStandinLightmapSettings LightmapSettings;
    
    UStandinFarPipeline();

};

