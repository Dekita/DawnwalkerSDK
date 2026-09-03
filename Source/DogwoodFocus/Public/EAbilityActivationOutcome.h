#pragma once
#include "CoreMinimal.h"
#include "EAbilityActivationOutcome.generated.h"

UENUM(BlueprintType)
enum class EAbilityActivationOutcome : uint8 {
    None,
    AbilityLocked,
    WrongEnemyType,
    NoWeaponEquipped,
    TooFarAway,
    CooldownActive,
    NoTarget,
    AlreadyPlanned,
    NotEnoughResources,
    VerticalDifference,
    VampireOnlyAbility,
    InvalidCombatState,
    NotEnoughFocusCharges,
    HumanOnlyAbility,
    CantBeUsedInCombat,
    CantUseOnThisEnemyRightNow,
};

