#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeStateChangeType.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeStateChangeType : uint8 {
    None,
    Changed,
    Sustained,
};

