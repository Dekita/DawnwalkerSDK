#pragma once
#include "CoreMinimal.h"
#include "MovieSceneFlowTemplateBase.h"
#include "MovieSceneFlowRepeaterTemplate.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FMovieSceneFlowRepeaterTemplate : public FMovieSceneFlowTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    FMovieSceneFlowRepeaterTemplate();
};

