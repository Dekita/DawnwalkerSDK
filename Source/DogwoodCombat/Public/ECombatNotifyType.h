#pragma once
#include "CoreMinimal.h"
#include "ECombatNotifyType.generated.h"

UENUM(BlueprintType)
enum class ECombatNotifyType : uint8 {
    None,
    AttackHit,
    AllowBlendOut,
    Untargetability,
    ComboWindow,
    Warning,
    LeftPose,
    AutoParry,
    AllowMovement,
    AfterHitComboWindow,
    Invincibility,
    CheckAttackRange,
    ActiveAbilityAllowMovement,
    ShowClaws,
};

