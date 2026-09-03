#pragma once
#include "CoreMinimal.h"
#include "ECharacterCombatActionConditionType.generated.h"

UENUM(BlueprintType)
enum class ECharacterCombatActionConditionType : uint8 {
    CombatState,
    CanAttack,
    CanDefend,
    QueueAttack,
    GuardEntered,
    GuardExited,
    DirectionalGuardEntered,
    Defense,
    Damaged,
    DashingDuringAttack,
    ChangeTarget,
    CombatTutorialInput,
    TargetHardLockChanged,
    EnemyStartedAttack,
    ParryWindowOpened,
    ForcedFistFight,
};

