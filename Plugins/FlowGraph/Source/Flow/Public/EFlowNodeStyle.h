#pragma once
#include "CoreMinimal.h"
#include "EFlowNodeStyle.generated.h"

UENUM(BlueprintType)
enum class EFlowNodeStyle : uint8 {
    Default,
    Custom,
    StartEnd,
    Choice,
    Response,
    Fact,
    Branch,
    AndRandSeq,
    Misc,
    Debug,
};

