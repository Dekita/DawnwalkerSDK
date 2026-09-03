#pragma once
#include "CoreMinimal.h"
#include "BillboardCloudVegetationPipelineSettings.h"
#include "SimplygonPipeline.h"
#include "BillboardCloudVegetationPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UBillboardCloudVegetationPipeline : public USimplygonPipeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBillboardCloudVegetationPipelineSettings Settings;
    
    UBillboardCloudVegetationPipeline();

};

