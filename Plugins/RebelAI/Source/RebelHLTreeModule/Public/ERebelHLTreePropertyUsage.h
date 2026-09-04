#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreePropertyUsage.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreePropertyUsage : uint8 {
    Invalid,
    Context,
    Input,
    Parameter,
    Output,
};

