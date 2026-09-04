#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeSelectionFallback.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeSelectionFallback : uint8 {
    None,
    NextSelectableSibling,
};

