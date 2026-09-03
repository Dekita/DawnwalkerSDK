#pragma once
#include "CoreMinimal.h"
#include "EAudioFadeState.generated.h"

UENUM(BlueprintType)
enum class EAudioFadeState : uint8 {
    FadedOut,
    FadedIn,
    DarkSimpleFadeIn,
    DarkSimpleFadeOut,
};

