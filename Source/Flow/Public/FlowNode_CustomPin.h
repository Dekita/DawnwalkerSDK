#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "TransitionOverride.h"
#include "FlowNode_CustomPin.generated.h"

UCLASS(Abstract, Blueprintable)
class FLOW_API UFlowNode_CustomPin : public UFlowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransitionOverride EndTransitionOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomPinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultPinName;
    
public:
    UFlowNode_CustomPin();

};

