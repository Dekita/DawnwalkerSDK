#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_LogicalOR.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_LogicalOR : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExecutionLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ExecutionCount;
    
public:
    UFlowNode_LogicalOR();

};

