#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "MovieSceneCinematicIdleSection.generated.h"

class UAnimSequence;

UCLASS(Abstract, Blueprintable)
class DIALOGUESYSTEM_API UMovieSceneCinematicIdleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* IdleSequence;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Weight;
    
    UMovieSceneCinematicIdleSection();

};

