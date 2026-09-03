#pragma once
#include "CoreMinimal.h"
#include "EDefenseType.generated.h"

UENUM(BlueprintType)
enum class EDefenseType : uint8 {
    None,
    Block,
    Parry,
    SpecialDefense,
    AttackParry,
    OmniBlock,
};

