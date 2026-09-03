#pragma once
#include "CoreMinimal.h"
#include "FlipbookPipelineSettings.h"
#include "SimplygonPipeline.h"
#include "FlipbookPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UFlipbookPipeline : public USimplygonPipeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlipbookPipelineSettings Settings;
    
    UFlipbookPipeline();

};

