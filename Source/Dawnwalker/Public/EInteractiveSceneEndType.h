#pragma once
#include "CoreMinimal.h"
#include "EInteractiveSceneEndType.generated.h"

UENUM(BlueprintType)
enum class EInteractiveSceneEndType : uint8 {
    CancelledByPlayer,
    CancelledByQuestNode,
    Completed,
};

