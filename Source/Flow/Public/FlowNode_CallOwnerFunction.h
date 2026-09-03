#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowOwnerFunctionRef.h"
#include "FlowNode_CallOwnerFunction.generated.h"

class UFlowOwnerFunctionParams;

UCLASS(Blueprintable)
class FLOW_API UFlowNode_CallOwnerFunction : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlowOwnerFunctionRef FunctionRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlowOwnerFunctionParams* Params;
    
public:
    UFlowNode_CallOwnerFunction();

};

