#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneCinematicIdleSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FMovieSceneCinematicIdleSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    FMovieSceneCinematicIdleSectionTemplate();
};

