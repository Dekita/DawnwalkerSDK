#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeRunStatus.h"
#include "RebelHLTreeActiveStates.h"
#include "RebelHLTreeNodeBlueprintBase.h"
#include "RebelHLTreeTransitionResult.h"
#include "RebelHLTreeTaskBlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELHLTREEMODULE_API URebelHLTreeTaskBlueprintBase : public URebelHLTreeNodeBlueprintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldStateChangeOnReselect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldCallTickOnlyOnEvents: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldCopyBoundPropertiesOnTick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldCopyBoundPropertiesOnExitState: 1;
    
public:
    URebelHLTreeTaskBlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ERebelHLTreeRunStatus ReceiveTick(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateCompleted(const ERebelHLTreeRunStatus CompletionStatus, const FRebelHLTreeActiveStates CompletedActiveStates);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveLatentTick(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveLatentEnterState(const FRebelHLTreeTransitionResult& Transition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExitState(const FRebelHLTreeTransitionResult& Transition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ERebelHLTreeRunStatus ReceiveEnterState(const FRebelHLTreeTransitionResult& Transition);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishTask(const bool bSucceeded);
    
};

