#pragma once
#include "CoreMinimal.h"
#include "EGenericAAEffectType.generated.h"

UENUM(BlueprintType)
enum class EGenericAAEffectType : uint8 {
    None,
    Stun,
    Bleed,
    Decapitation,
    MindControl,
    Explode,
    InstaKill,
    PassiveInFight,
};

