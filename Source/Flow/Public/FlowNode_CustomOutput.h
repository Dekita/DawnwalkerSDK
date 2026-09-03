#pragma once
#include "CoreMinimal.h"
#include "FlowNode_CustomEventBase.h"
#include "FlowNode_CustomOutput.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_CustomOutput : public UFlowNode_CustomEventBase {
    GENERATED_BODY()
public:
    UFlowNode_CustomOutput();

};

