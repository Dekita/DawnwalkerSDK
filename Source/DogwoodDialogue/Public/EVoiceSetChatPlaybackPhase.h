#pragma once
#include "CoreMinimal.h"
#include "EVoiceSetChatPlaybackPhase.generated.h"

UENUM(BlueprintType)
enum class EVoiceSetChatPlaybackPhase : uint8 {
    Created,
    Asking,
    Responding,
    Finished,
};

