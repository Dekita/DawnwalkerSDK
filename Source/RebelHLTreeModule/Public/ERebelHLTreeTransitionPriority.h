#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeTransitionPriority.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeTransitionPriority : uint8 {
    None,
    Normal,
    Medium,
    High,
    Critical,
};

