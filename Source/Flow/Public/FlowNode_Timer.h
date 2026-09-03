#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_Timer.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_Timer : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SumOfSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float RemainingCompletionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float RemainingStepTime;
    
public:
    UFlowNode_Timer();

private:
    UFUNCTION(BlueprintCallable)
    void OnStep();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletion();
    
};

