#pragma once
#include "CoreMinimal.h"
#include "RemeshingPipelineSettings.h"
#include "SimplygonPipeline.h"
#include "RemeshingPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API URemeshingPipeline : public USimplygonPipeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemeshingPipelineSettings Settings;
    
    URemeshingPipeline();

};

