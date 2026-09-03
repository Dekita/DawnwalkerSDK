#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneStringChannel.h"
#include "MovieSceneFlowSectionBase.h"
#include "MovieSceneFlowTriggerSection.generated.h"

UCLASS(Blueprintable)
class FLOW_API UMovieSceneFlowTriggerSection : public UMovieSceneFlowSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel StringChannel;
    
    UMovieSceneFlowTriggerSection();

};

