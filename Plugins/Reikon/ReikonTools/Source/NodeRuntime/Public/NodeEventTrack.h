#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Tracks/MovieSceneEventTrack.h"
#include "NodeEventTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class NODERUNTIME_API UNodeEventTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireEventsAtPosition EventPosition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UNodeEventTrack();


    // Fix for true pure virtual functions not being implemented
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override { return FMovieSceneEvalTemplatePtr(); }
};

