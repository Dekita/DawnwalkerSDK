#pragma once
#include "CoreMinimal.h"
#include "EAbilityCategory.generated.h"

UENUM(BlueprintType)
enum class EAbilityCategory : uint8 {
    None,
    Swordmastery,
    Witchcraft,
    Vampirism,
};

