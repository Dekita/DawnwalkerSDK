#pragma once
#include "CoreMinimal.h"
#include "FlowNode_ComponentObserver.h"
#include "FlowNode_OnActorUnregistered.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_OnActorUnregistered : public UFlowNode_ComponentObserver {
    GENERATED_BODY()
public:
    UFlowNode_OnActorUnregistered();

};

