#pragma once
#include "CoreMinimal.h"
#include "ERebelAudioDialoguePlaybackModeEquivalent.generated.h"

UENUM(BlueprintType)
enum class ERebelAudioDialoguePlaybackModeEquivalent : uint8 {
    Cinematic,
    Gameplay,
    CinematicGameplay,
    Cutscene,
};

