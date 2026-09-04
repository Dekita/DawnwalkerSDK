#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FlowNode_FactTest.h"
#include "FlowNode_FactObserver.generated.h"

UCLASS(Abstract, Blueprintable)
class DIALOGUESYSTEM_API UFlowNode_FactObserver : public UFlowNode_FactTest {
    GENERATED_BODY()
public:
    UFlowNode_FactObserver();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFactEntryChanged(const FGameplayTag& FactName);
    
};

