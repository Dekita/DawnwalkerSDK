#pragma once
#include "CoreMinimal.h"
#include "EDialoguePlaybackMode.generated.h"

UENUM(BlueprintType)
enum class EDialoguePlaybackMode : uint8 {
    Cinematic,
    Gameplay,
    CinematicGameplay,
    Cutscene,
};

