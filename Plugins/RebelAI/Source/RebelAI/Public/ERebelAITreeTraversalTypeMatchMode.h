#pragma once
#include "CoreMinimal.h"
#include "ERebelAITreeTraversalTypeMatchMode.generated.h"

UENUM(BlueprintType)
enum class ERebelAITreeTraversalTypeMatchMode : uint8 {
    None,
    AnyNodeWithAnyType,
    AnyNodeWithAnyTypeExact,
};

