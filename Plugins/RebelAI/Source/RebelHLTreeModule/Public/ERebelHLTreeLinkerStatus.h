#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeLinkerStatus.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeLinkerStatus : uint8 {
    Succeeded,
    Failed,
};

