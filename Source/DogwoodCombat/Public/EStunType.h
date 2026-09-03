#pragma once
#include "CoreMinimal.h"
#include "EStunType.generated.h"

UENUM(BlueprintType)
enum class EStunType : uint8 {
    Stun,
    Knockdown,
    CustomStun,
    CustomStunRecovery,
};

