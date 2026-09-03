#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicTree_Processing_Mode.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicTree_Processing_Mode : uint8 {
    None,
    Query,
    Executor,
};

