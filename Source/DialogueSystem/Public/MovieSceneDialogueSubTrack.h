#pragma once
#include "CoreMinimal.h"
#include "Tracks/MovieSceneSubTrack.h"
#include "MovieSceneDialogueSubTrack.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UMovieSceneDialogueSubTrack : public UMovieSceneSubTrack {
    GENERATED_BODY()
public:
    UMovieSceneDialogueSubTrack(const FObjectInitializer& ObjectInitializer);

};

