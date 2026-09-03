#pragma once
#include "CoreMinimal.h"
#include "EQuestActionBlockerType.generated.h"

UENUM(BlueprintType)
enum class EQuestActionBlockerType : uint8 {
    BloodDrinking,
    DialoguePlaying,
    ActiveLoadingScreen,
    PlayerDead,
};

