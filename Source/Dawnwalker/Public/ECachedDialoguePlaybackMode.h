#pragma once
#include "CoreMinimal.h"
#include "ECachedDialoguePlaybackMode.generated.h"

UENUM(BlueprintType)
enum class ECachedDialoguePlaybackMode : uint8 {
    Unknown,
    Cinematic,
    Cutscene,
    Gameplay,
    CinematicGameplay,
};

