#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "JaliAnimationTrack.h"
#include "JaliTrack.generated.h"

UCLASS(Blueprintable)
class JALI_API UJaliTrack : public UJaliAnimationTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UJaliTrack();

protected:
    // Real implementation unknown (not reconstructable from reflection data); returns an empty/no-op template.
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override { return FMovieSceneEvalTemplatePtr(); }
};

