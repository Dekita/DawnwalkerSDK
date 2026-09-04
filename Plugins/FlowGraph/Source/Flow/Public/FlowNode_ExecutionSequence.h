#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlowNode.h"
#include "FlowNode_ExecutionSequence.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_ExecutionSequence : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSavePinExecutionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSet<FGuid> ExecutedConnections;
    
public:
    UFlowNode_ExecutionSequence();

};

