#pragma once
#include "CoreMinimal.h"
#include "BillboardCloudPipelineSettings.h"
#include "SimplygonStandinPipeline.h"
#include "StandinLightmapSettings.h"
#include "BillboardCloudPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STANDINACTOR_API UBillboardCloudPipeline : public USimplygonStandinPipeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBillboardCloudPipelineSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStandinLightmapSettings LightmapSettings;
    
    UBillboardCloudPipeline();

};

