#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "JaliEmotionSectionTemplate.generated.h"

class UJaliEmotionSection;

USTRUCT(BlueprintType)
struct JALI_API FJaliEmotionSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJaliEmotionSection* Section;
    
public:
    FJaliEmotionSectionTemplate();
};

