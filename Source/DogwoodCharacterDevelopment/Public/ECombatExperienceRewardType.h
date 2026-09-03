#pragma once
#include "CoreMinimal.h"
#include "ECombatExperienceRewardType.generated.h"

UENUM(BlueprintType)
enum class ECombatExperienceRewardType : uint8 {
    None,
    XP_HumanEasy,
    XP_WolfEasy,
    XP_UndeadEasy,
};

