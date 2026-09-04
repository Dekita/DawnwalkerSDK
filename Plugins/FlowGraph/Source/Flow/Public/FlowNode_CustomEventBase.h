#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_CustomEventBase.generated.h"

UCLASS(Abstract, Blueprintable)
class FLOW_API UFlowNode_CustomEventBase : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
public:
    UFlowNode_CustomEventBase();

};

