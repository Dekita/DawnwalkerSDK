#pragma once
#include "CoreMinimal.h"
#include "ECommunityActionAbortMode.generated.h"

UENUM(BlueprintType)
enum class ECommunityActionAbortMode : uint8 {
    WaitForLoopEnd,
    JumpToFastOut,
    Immediate,
};

