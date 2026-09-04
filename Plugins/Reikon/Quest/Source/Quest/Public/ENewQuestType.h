#pragma once
#include "CoreMinimal.h"
#include "ENewQuestType.generated.h"

UENUM(BlueprintType)
enum class ENewQuestType : uint8 {
    MainGoal,
    Story,
    NanoPOI,
};

