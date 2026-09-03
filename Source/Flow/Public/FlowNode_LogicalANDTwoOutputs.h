#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_LogicalANDTwoOutputs.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_LogicalANDTwoOutputs : public UFlowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSet<FName> ExecutedInputNames;
    
public:
    UFlowNode_LogicalANDTwoOutputs();

};

