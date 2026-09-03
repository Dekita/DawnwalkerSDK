#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeBlueprintPropertyCategory.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeBlueprintPropertyCategory : uint8 {
    NotSet,
    Input,
    Parameter,
    Output,
    ContextObject,
};

