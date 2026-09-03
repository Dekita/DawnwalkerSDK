#pragma once
#include "CoreMinimal.h"
#include "ECharacterDevelopmentConditionType.generated.h"

UENUM(BlueprintType)
enum class ECharacterDevelopmentConditionType : uint8 {
    SkillBought,
    SkillTreeIsOpened,
    SkillTreeIsClosed,
    SkillUnblocked,
    AbilityEquipped,
    QuickslotBound,
    SlotEquipmentStarted,
    MutationGained,
    SkillPointsAvailable,
};

