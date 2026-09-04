#pragma once
#include "CoreMinimal.h"
#include "FlowNode_CustomEventBase.h"
#include "FlowNode_CustomInput.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_CustomInput : public UFlowNode_CustomEventBase {
    GENERATED_BODY()
public:
    UFlowNode_CustomInput();

};

