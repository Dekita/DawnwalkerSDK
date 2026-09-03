#pragma once
#include "CoreMinimal.h"
#include "EEffectTargetOverride.generated.h"

UENUM(BlueprintType)
enum class EEffectTargetOverride : uint8 {
    Target,
    Player,
    HandledBySequence,
    InstaKillNotProc,
    HandleAfterTargetDied,
    HandleWhenCustomConditonMet,
    InstaKillNotProcTarget,
};

