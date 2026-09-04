#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneFlowTemplateBase.h"
#include "MovieSceneFlowTriggerTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFlowTriggerTemplate : public FMovieSceneFlowTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> EventTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EventNames;
    
    FLOW_API FMovieSceneFlowTriggerTemplate();
};

