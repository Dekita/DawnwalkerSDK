#pragma once
#include "CoreMinimal.h"
#include "FDawnwalkerAIActionFragment_HitSoundType.generated.h"

UENUM()
enum class FDawnwalkerAIActionFragment_HitSoundType : int32 {
    Hit,
    Parry,
    AttackParry,
    HitEnder,
    CriticalHitFlavor,
};

