#pragma once
#include "CoreMinimal.h"
#include "EVoiceWaveType.generated.h"

UENUM(BlueprintType)
enum class EVoiceWaveType : uint8 {
    Any,
    EmptyPlaceholder,
    ImportedVoice,
};

