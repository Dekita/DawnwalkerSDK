#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "GameplayEffectDurationTemplate.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FGameplayEffectDurationTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    FGameplayEffectDurationTemplate();
};

