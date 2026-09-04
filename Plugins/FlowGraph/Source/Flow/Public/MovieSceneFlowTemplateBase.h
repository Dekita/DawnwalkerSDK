#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneFlowTemplateBase.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFlowTemplateBase : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
public:
    FLOW_API FMovieSceneFlowTemplateBase();
};

