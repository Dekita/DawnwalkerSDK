#pragma once
#include "CoreMinimal.h"
#include "EVideoPlaybackTransitionType.generated.h"

UENUM(BlueprintType)
enum class EVideoPlaybackTransitionType : uint8 {
    None,
    Fade,
    PostProcess,
};

