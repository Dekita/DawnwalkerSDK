#pragma once
#include "CoreMinimal.h"
#include "MovieSceneActorVisibilityChannel.h"
#include "MovieSceneActorVisibilitySectionBase.h"
#include "MovieSceneActorVisibilityTriggerSection.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UMovieSceneActorVisibilityTriggerSection : public UMovieSceneActorVisibilitySectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorVisibilityChannel ActorVisibilityChannel;
    
    UMovieSceneActorVisibilityTriggerSection();

};

