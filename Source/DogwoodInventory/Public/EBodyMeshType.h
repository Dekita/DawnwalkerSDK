#pragma once
#include "CoreMinimal.h"
#include "EBodyMeshType.generated.h"

UENUM(BlueprintType)
enum class EBodyMeshType : uint8 {
    Invalid,
    Hair,
    Head,
    Beard = 4,
    Torso = 8,
    Hands = 16,
    Legs = 32,
    Feet = 64,
    Eyebrows = 128,
};

