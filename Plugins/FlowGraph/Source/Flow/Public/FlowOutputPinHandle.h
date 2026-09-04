#pragma once
#include "CoreMinimal.h"
#include "FlowPinHandle.h"
#include "FlowOutputPinHandle.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FFlowOutputPinHandle : public FFlowPinHandle {
    GENERATED_BODY()
public:
    FFlowOutputPinHandle();
};

