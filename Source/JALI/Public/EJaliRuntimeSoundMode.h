#pragma once
#include "CoreMinimal.h"
#include "EJaliRuntimeSoundMode.generated.h"

UENUM(BlueprintType)
enum class EJaliRuntimeSoundMode : uint8 {
    Invalid,
    Asset,
    TTS_AWS,
    TTS_External,
};

