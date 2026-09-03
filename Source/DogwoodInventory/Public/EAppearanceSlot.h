#pragma once
#include "CoreMinimal.h"
#include "EAppearanceSlot.generated.h"

UENUM(BlueprintType)
enum class EAppearanceSlot : uint8 {
    Invalid,
    Headgear,
    Torso,
    Legs,
    Gauntlets,
    Feet,
};

