#pragma once
#include "CoreMinimal.h"
#include "ERebelAudioDialoguePlaybackModeEquivalent.h"
#include "CinematicVoiceoverEventsCache.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct REBELAUDIO_API FCinematicVoiceoverEventsCache {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelAudioDialoguePlaybackModeEquivalent, UAkAudioEvent*> AkEventsByDialoguePlaybackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelAudioDialoguePlaybackModeEquivalent, UAkAudioEvent*> MainCharacterAkEventsByDialoguePlaybackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MainCharacterCombatGameplayVo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MainCharacterCombatCinematicGameplayVo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MainCharacterInternalDialogueVo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CombatGameplayVo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CombatCinematicGameplayVo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PreviewVo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> CustomVoEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VoNarrationStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* VoNarrationEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OverheadSubtitlesAlwaysVisibleCustomVo;
    
public:
    FCinematicVoiceoverEventsCache();
};

