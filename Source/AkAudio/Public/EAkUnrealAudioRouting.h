#pragma once
#include "CoreMinimal.h"
#include "EAkUnrealAudioRouting.generated.h"

UENUM()
enum class EAkUnrealAudioRouting : int32 {
    EnableWwiseOnly,
    Separate,
    AudioLink,
    AudioMixer,
    EnableUnrealOnly,
    Custom,
};

