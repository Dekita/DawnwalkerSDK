#pragma once
#include "CoreMinimal.h"
#include "EQuestNotificationType.generated.h"

UENUM(BlueprintType)
enum class EQuestNotificationType : uint8 {
    None,
    Updated,
    Added,
    Failed,
    Ended,
};

