#pragma once
#include "CoreMinimal.h"
#include "FlowPinHandle.h"
#include "FlowInputPinHandle.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FFlowInputPinHandle : public FFlowPinHandle {
    GENERATED_BODY()
public:
    FFlowInputPinHandle();
};

