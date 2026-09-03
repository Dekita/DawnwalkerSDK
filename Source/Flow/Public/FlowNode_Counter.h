#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_Counter.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_Counter : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Goal;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentSum;
    
public:
    UFlowNode_Counter();

};

