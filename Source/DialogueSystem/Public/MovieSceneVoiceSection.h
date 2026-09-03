#pragma once
#include "CoreMinimal.h"
#include "Sections/MovieSceneAudioSection.h"
#include "VoiceSectionData.h"
#include "MovieSceneVoiceSection.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UMovieSceneVoiceSection : public UMovieSceneAudioSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceSectionData VoiceData;
    
    UMovieSceneVoiceSection();

};

