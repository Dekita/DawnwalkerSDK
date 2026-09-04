#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNode_Loop_Mode.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicNode_Loop_Mode : uint8 {
    Infinite,
    Count,
};

