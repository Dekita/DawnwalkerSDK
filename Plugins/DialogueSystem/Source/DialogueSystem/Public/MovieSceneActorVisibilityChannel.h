#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "ActorVisibilityEvent.h"
#include "MovieSceneActorVisibilityChannel.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneActorVisibilityChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorVisibilityEvent> KeyValues;
    
public:
    DIALOGUESYSTEM_API FMovieSceneActorVisibilityChannel();
};

