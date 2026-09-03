#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAkTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAkAudioEventTrack.generated.h"

UCLASS(Blueprintable)
class REBELAUDIO_API UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneAkAudioEventTrack();

protected:
    // Real implementation unknown (not reconstructable from reflection data); returns an empty/no-op template.
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override { return FMovieSceneEvalTemplatePtr(); }
};

