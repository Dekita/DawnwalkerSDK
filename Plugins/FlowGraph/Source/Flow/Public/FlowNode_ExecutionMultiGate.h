#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_ExecutionMultiGate.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_ExecutionMultiGate : public UFlowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NextOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<bool> Completed;
    
public:
    UFlowNode_ExecutionMultiGate();

};

