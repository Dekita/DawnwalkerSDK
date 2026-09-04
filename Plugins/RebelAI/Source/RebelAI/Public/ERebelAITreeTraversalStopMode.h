#pragma once
#include "CoreMinimal.h"
#include "ERebelAITreeTraversalStopMode.generated.h"

UENUM(BlueprintType)
enum class ERebelAITreeTraversalStopMode : uint8 {
    Leaf,
    TypeMatch,
};

