#pragma once
#include "CoreMinimal.h"
#include "EQuestType.generated.h"

UENUM(BlueprintType)
enum class EQuestType : uint8 {
    MainQuest,
    SideQuest,
    Undefined,
    PointOfInterest,
};

