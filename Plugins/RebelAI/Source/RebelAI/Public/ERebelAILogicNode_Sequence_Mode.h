#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNode_Sequence_Mode.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicNode_Sequence_Mode : uint8 {
    Default,
    BreakOnFailure,
};

