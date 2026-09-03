#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneStringChannel.h"
#include "NodeEventSectionBase.h"
#include "NodeEventTriggerSection.generated.h"

UCLASS(Blueprintable)
class NODERUNTIME_API UNodeEventTriggerSection : public UNodeEventSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel StringChannel;
    
    UNodeEventTriggerSection();

};

