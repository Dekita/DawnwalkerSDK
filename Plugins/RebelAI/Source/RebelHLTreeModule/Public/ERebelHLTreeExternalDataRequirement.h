#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeExternalDataRequirement.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeExternalDataRequirement : uint8 {
    Required,
    Optional,
};

