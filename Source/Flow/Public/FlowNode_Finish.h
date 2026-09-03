#pragma once
#include "CoreMinimal.h"
#include "FlowNode_CustomPin.h"
#include "FlowNode_Finish.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_Finish : public UFlowNode_CustomPin {
    GENERATED_BODY()
public:
    UFlowNode_Finish();

};

