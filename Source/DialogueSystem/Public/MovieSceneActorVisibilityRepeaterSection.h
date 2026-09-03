#pragma once
#include "CoreMinimal.h"
#include "ActorVisibilityEvent.h"
#include "MovieSceneActorVisibilitySectionBase.h"
#include "MovieSceneActorVisibilityRepeaterSection.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UMovieSceneActorVisibilityRepeaterSection : public UMovieSceneActorVisibilitySectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorVisibilityEvent Event;
    
    UMovieSceneActorVisibilityRepeaterSection();

};

