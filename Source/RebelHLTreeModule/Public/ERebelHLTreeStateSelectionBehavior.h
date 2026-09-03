#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeStateSelectionBehavior.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeStateSelectionBehavior : uint8 {
    None,
    TryEnterState,
    TrySelectChildrenInOrder,
    TryFollowTransitions,
};

