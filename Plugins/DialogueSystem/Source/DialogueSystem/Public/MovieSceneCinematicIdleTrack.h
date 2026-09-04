#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneCinematicIdleTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UMovieSceneCinematicIdleTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneCinematicIdleTrack();


    // Fix for true pure virtual functions not being implemented
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override { return FMovieSceneEvalTemplatePtr(); }
};

