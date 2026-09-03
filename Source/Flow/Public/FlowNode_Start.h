#pragma once
#include "CoreMinimal.h"
#include "FlowNode_CustomPin.h"
#include "FlowNode_Start.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_Start : public UFlowNode_CustomPin {
    GENERATED_BODY()
public:
    UFlowNode_Start();

};

