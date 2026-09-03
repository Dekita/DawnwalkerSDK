#pragma once
#include "CoreMinimal.h"
#include "EInspectionEndType.generated.h"

UENUM(BlueprintType)
enum class EInspectionEndType : uint8 {
    CancelledByPlayer,
    CancelledByQuestNode,
    Completed,
};

