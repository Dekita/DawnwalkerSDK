#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeBindableStructSource.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeBindableStructSource : uint8 {
    Context,
    Parameter,
    State,
    Condition,
};

