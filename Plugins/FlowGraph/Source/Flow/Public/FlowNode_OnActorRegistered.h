#pragma once
#include "CoreMinimal.h"
#include "FlowNode_ComponentObserver.h"
#include "FlowNode_OnActorRegistered.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_OnActorRegistered : public UFlowNode_ComponentObserver {
    GENERATED_BODY()
public:
    UFlowNode_OnActorRegistered();

};

