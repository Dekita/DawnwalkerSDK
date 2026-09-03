#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeNodeBlueprintBase.h"
#include "RebelHLTreeEvaluatorBlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELHLTREEMODULE_API URebelHLTreeEvaluatorBlueprintBase : public URebelHLTreeNodeBlueprintBase {
    GENERATED_BODY()
public:
    URebelHLTreeEvaluatorBlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTreeStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTreeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(const float DeltaTime);
    
};

