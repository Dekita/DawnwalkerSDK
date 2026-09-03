#pragma once
#include "CoreMinimal.h"
#include "EFocusableObjectCategory.generated.h"

UENUM(BlueprintType)
enum class EFocusableObjectCategory : uint8 {
    Default,
    Blood,
    Track,
    Smell,
    FriendlyNPC,
    HostileNPC,
    Collectable,
    Silver,
};

