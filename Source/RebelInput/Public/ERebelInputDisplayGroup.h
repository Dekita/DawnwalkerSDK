#pragma once
#include "CoreMinimal.h"
#include "ERebelInputDisplayGroup.generated.h"

UENUM(BlueprintType)
enum class ERebelInputDisplayGroup : uint8 {
    None,
    General,
    Movement,
    Combat,
    Abilities,
    Shortcuts,
    PhotoMode,
};

