#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactNode.h"
#include "FlowNode_ObserverOnFactChange.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UFlowNode_ObserverOnFactChange : public UFactNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnregisterOnChange;
    
public:
    UFlowNode_ObserverOnFactChange();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFactChanged(const FGameplayTag& FactName);
    
};

