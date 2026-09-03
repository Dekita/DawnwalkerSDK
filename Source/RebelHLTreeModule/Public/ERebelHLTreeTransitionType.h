#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeTransitionType.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeTransitionType : uint8 {
    None,
    Succeeded,
    Failed,
    GotoState,
    NextState,
    NextSelectableState,
    NotSet,
};

