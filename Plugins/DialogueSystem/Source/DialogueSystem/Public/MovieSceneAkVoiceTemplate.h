#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAkAudioEventTemplate.h"
#include "MovieSceneAkVoiceTemplate.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FMovieSceneAkVoiceTemplate : public FMovieSceneAkAudioEventTemplate {
    GENERATED_BODY()
public:
    FMovieSceneAkVoiceTemplate();
};

