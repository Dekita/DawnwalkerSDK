#pragma once
#include "CoreMinimal.h"
#include "EDayPhase.h"
#include "FlowNode.h"
#include "FlowNode_DayPhaseBranch.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UFlowNode_DayPhaseBranch : public UFlowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDayPhase DayPhase;
    
public:
    UFlowNode_DayPhaseBranch();

};

