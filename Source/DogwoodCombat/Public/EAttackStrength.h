#pragma once
#include "CoreMinimal.h"
#include "EAttackStrength.generated.h"

UENUM(BlueprintType)
enum class EAttackStrength : uint8 {
    None,
    Unarmed,
    Light,
    Medium,
    Strong,
};

