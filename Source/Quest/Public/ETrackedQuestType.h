#pragma once
#include "CoreMinimal.h"
#include "ETrackedQuestType.generated.h"

UENUM(BlueprintType)
enum class ETrackedQuestType : uint8 {
    Main,
    User,
    Count,
};

