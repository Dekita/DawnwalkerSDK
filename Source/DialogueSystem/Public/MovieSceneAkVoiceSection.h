#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAkAudioEventSection.h"
#include "VoiceImportData.h"
#include "VoiceSectionData.h"
#include "MovieSceneAkVoiceSection.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UMovieSceneAkVoiceSection : public UMovieSceneAkAudioEventSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceSectionData VoiceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceImportData ImportData;
    
    UMovieSceneAkVoiceSection();

};

