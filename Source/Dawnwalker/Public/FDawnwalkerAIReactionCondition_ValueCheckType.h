#pragma once
#include "CoreMinimal.h"
#include "FDawnwalkerAIReactionCondition_ValueCheckType.generated.h"

UENUM(BlueprintType)
enum class FDawnwalkerAIReactionCondition_ValueCheckType : uint8 {
    Equal,
    Greater,
    GreaterEqual,
    Less,
    LessEqual,
};

