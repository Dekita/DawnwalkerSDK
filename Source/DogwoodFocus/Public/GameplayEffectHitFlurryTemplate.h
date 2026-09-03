#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "GameplayEffectHitFlurryTemplate.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FGameplayEffectHitFlurryTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    FGameplayEffectHitFlurryTemplate();
};

