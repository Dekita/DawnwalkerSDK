#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeStateType.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeStateType : uint8 {
    State,
    Group,
    Linked,
    LinkedAsset,
    Subtree,
};

