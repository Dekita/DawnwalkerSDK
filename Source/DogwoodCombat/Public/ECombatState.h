#pragma once
#include "CoreMinimal.h"
#include "ECombatState.generated.h"

UENUM(BlueprintType)
enum class ECombatState : uint8 {
    Idle,
    Startup,
    Active,
    Recovery,
    ParryRecovery,
    BlockRecovery,
    Hitstun,
    Blocking,
    Dashing,
    Stunned,
    Dead,
    Synchronised,
    AbilityCasting,
};

