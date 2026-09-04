#pragma once
#include "CoreMinimal.h"
#include "ERebelAIReactionAbortMode.generated.h"

UENUM(BlueprintType)
enum class ERebelAIReactionAbortMode : uint8 {
    WaitForBehaviorEnd,
    JumpToFastOut,
    Immediate,
};

