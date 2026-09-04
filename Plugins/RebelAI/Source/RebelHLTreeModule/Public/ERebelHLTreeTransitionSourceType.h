#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeTransitionSourceType.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeTransitionSourceType : uint8 {
    Unset,
    Asset,
    ExternalRequest,
    Internal,
};

