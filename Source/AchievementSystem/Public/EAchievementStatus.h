#pragma once
#include "CoreMinimal.h"
#include "EAchievementStatus.generated.h"

UENUM(BlueprintType)
enum class EAchievementStatus : uint8 {
    NotUnlocked,
    Unlocking,
    Unlocked,
};

