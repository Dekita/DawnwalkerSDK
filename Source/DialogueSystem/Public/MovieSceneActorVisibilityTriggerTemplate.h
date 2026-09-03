#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorVisibilityEvent.h"
#include "MovieSceneActorVisibilityTemplateBase.h"
#include "MovieSceneActorVisibilityTriggerTemplate.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FMovieSceneActorVisibilityTriggerTemplate : public FMovieSceneActorVisibilityTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> EventTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorVisibilityEvent> Events;
    
    FMovieSceneActorVisibilityTriggerTemplate();
};

