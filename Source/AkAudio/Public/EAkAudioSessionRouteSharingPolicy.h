#pragma once
#include "CoreMinimal.h"
#include "EAkAudioSessionRouteSharingPolicy.generated.h"

UENUM()
enum class EAkAudioSessionRouteSharingPolicy : int32 {
    Default,
    LongFormAudio,
    LongFormVideo = 3,
};

