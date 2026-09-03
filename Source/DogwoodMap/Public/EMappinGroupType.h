#pragma once
#include "CoreMinimal.h"
#include "EMappinGroupType.generated.h"

UENUM(BlueprintType)
enum class EMappinGroupType : uint8 {
    Quest,
    QuestStart,
    OpenWorld,
    Other,
};

