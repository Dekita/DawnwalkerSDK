#pragma once
#include "CoreMinimal.h"
#include "EPlayerAnimationLevel.generated.h"

UENUM(BlueprintType)
enum class EPlayerAnimationLevel : uint8 {
    None,
    Novice,
    Intermediate,
    Advanced,
    Expert,
};

