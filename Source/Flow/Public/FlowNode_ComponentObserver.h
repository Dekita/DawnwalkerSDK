#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFlowTagContainerMatchType.h"
#include "FlowNode.h"
#include "FlowNode_ComponentObserver.generated.h"

class UFlowComponent;

UCLASS(Abstract, Blueprintable)
class FLOW_API UFlowNode_ComponentObserver : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IdentityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlowTagContainerMatchType IdentityMatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SuccessCount;
    
public:
    UFlowNode_ComponentObserver();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEventReceived();
    
    UFUNCTION(BlueprintCallable)
    void OnComponentUnregistered(UFlowComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentTagRemoved(UFlowComponent* Component, const FGameplayTagContainer& RemovedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentTagAdded(UFlowComponent* Component, const FGameplayTagContainer& AddedTags);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentRegistered(UFlowComponent* Component);
    
};

