#pragma once
#include "CoreMinimal.h"
#include "MovieSceneFlowSectionBase.h"
#include "MovieSceneFlowRepeaterSection.generated.h"

UCLASS(Blueprintable)
class FLOW_API UMovieSceneFlowRepeaterSection : public UMovieSceneFlowSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UMovieSceneFlowRepeaterSection();

};

