#pragma once
#include "CoreMinimal.h"
#include "EFlowValueComparator.h"
#include "FlowNode_FactObserver.h"
#include "FlowNode_ConditionFactInt.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UFlowNode_ConditionFactInt : public UFlowNode_FactObserver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlowValueComparator Operation;
    
public:
    UFlowNode_ConditionFactInt();

};

