#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneLookAtTemplate.generated.h"

class UMovieSceneLookAtSection;

USTRUCT(BlueprintType)
struct FMovieSceneLookAtTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneLookAtSection* LookAtSection;
    
    DIALOGUESYSTEM_API FMovieSceneLookAtTemplate();
};

