#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_RandomPath.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_RandomPath : public UFlowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoRepetition;
    
    UFlowNode_RandomPath();

};

