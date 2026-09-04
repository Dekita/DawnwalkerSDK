#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNode_Random_Algorithm.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicNode_Random_Algorithm : uint8 {
    Default,
    WeightedRandom,
    ShuffleRandom,
};

