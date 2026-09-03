#pragma once
#include "CoreMinimal.h"
#include "FTemp_ETicketCooldown.generated.h"

UENUM(BlueprintType)
enum class FTemp_ETicketCooldown : uint8 {
    BlockTicketWhenAttackedWithoutTicketTime,
    HelperTicketCooldown,
    HelperTicketCooldownWhenHealthIsLow,
    HelperRangedAttackCooldown,
};

