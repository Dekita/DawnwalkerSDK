#pragma once
#include "CoreMinimal.h"
#include "ECharacterDevelopmentAbilityType.generated.h"

UENUM(BlueprintType)
enum class ECharacterDevelopmentAbilityType : uint8 {
    None,
    Combat,
    Vampire,
    Magic = 4,
};

