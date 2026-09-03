#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "JaliTrackSectionTemplate.generated.h"

class UJaliTrackSection;

USTRUCT(BlueprintType)
struct JALI_API FJaliTrackSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJaliTrackSection* Section;
    
public:
    FJaliTrackSectionTemplate();
};

