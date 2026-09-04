#pragma once
#include "CoreMinimal.h"
#include "ActorVisibilityEvent.h"
#include "MovieSceneActorVisibilityTemplateBase.h"
#include "MovieSceneActorVisibilityRepeaterTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneActorVisibilityRepeaterTemplate : public FMovieSceneActorVisibilityTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorVisibilityEvent Event;
    
    DIALOGUESYSTEM_API FMovieSceneActorVisibilityRepeaterTemplate();
};

