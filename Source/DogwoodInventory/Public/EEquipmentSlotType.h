#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlotType.generated.h"

UENUM(BlueprintType)
enum class EEquipmentSlotType : uint8 {
    None,
    Head,
    Chest,
    Legs,
    Hands,
    Feet,
    Weapon,
    OffHand,
    Amulet,
    Ring,
    Extra2,
    Quickslot1,
    Quickslot2,
    Quickslot3,
    Quickslot4,
    Special,
    Amulet2,
    Ring2,
};

