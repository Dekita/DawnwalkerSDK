#pragma once
#include "CoreMinimal.h"
#include "ReductionPipelineSettings.h"
#include "SimplygonPipeline.h"
#include "ReductionPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UReductionPipeline : public USimplygonPipeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReductionPipelineSettings Settings;
    
    UReductionPipeline();

};

