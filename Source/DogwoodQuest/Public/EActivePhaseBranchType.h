#pragma once
#include "CoreMinimal.h"
#include "EActivePhaseBranchType.generated.h"

UENUM(BlueprintType)
enum class EActivePhaseBranchType : uint8 {
    Queued,
    Active,
    Any,
};

