#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicTree_InjectMode.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicTree_InjectMode : uint8 {
    ReplaceStackFrame,
    PushStackFrame,
    Unset,
};

