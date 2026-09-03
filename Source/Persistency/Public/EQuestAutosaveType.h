#pragma once
#include "CoreMinimal.h"
#include "EQuestAutosaveType.generated.h"

UENUM(BlueprintType)
enum class EQuestAutosaveType : uint8 {
    Default,
    Final,
    ReturnToSafety,
    Debug,
};

