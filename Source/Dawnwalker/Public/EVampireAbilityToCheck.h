#pragma once
#include "CoreMinimal.h"
#include "EVampireAbilityToCheck.generated.h"

UENUM(BlueprintType)
enum class EVampireAbilityToCheck : uint8 {
    AnyVampireAbility,
    Shadowstep,
    AntiGrav,
    FogForm,
    ClawRide,
    ClawAttack,
    VoraciousBite,
    Shadowstorm,
    Scream,
    BloodSurge,
    Mesmerize,
};

