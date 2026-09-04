#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "CinematicVoiceoverEventsCache.h"
#include "RebelAudioExternalSourceEngineSubsystem.generated.h"

UCLASS(Blueprintable)
class REBELAUDIO_API URebelAudioExternalSourceEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicVoiceoverEventsCache VoiceoverEventsCache;
    
    URebelAudioExternalSourceEngineSubsystem();

};

