#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeNodeBlueprintBase.h"
#include "RebelHLTreeConditionBlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELHLTREEMODULE_API URebelHLTreeConditionBlueprintBase : public URebelHLTreeNodeBlueprintBase {
    GENERATED_BODY()
public:
    URebelHLTreeConditionBlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReceiveTestCondition() const;
    
};

