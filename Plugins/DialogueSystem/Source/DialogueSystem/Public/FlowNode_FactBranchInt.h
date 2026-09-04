#pragma once
#include "CoreMinimal.h"
#include "EFlowValueComparator.h"
#include "FlowNode_FactBranch.h"
#include "FlowNode_FactBranchInt.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UFlowNode_FactBranchInt : public UFlowNode_FactBranch {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlowValueComparator Operation;
    
public:
    UFlowNode_FactBranchInt();

};

