#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StructUtils/InstancedStruct.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERebelAILogicTree_TaskRunStatus.h"
#include "RebelAIEvent.h"
#include "RebelAILogicTree_ExecutionContextHandle.h"
#include "RebelAINodeHandle.h"
#include "RebelAILogicNode_Task_BlueprintBase.generated.h"

class URebelAILogicTree_ServiceProxy;
class URebelAIStub;

UCLASS(Blueprintable)
class URebelAILogicNode_Task_BlueprintBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* OwnerAIStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAILogicTree_ServiceProxy* LTServiceProxy;
    
public:
    URebelAILogicNode_Task_BlueprintBase();

    UFUNCTION(BlueprintCallable)
    void SubscribeToEvents(const FGameplayTagContainer& EventTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEvent(const FRebelAIEvent& Event) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndExecute();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginExecute();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetTypeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FInstancedStruct GetParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRebelAINodeHandle GetNodeHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetIconName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRebelAILogicTree_ExecutionContextHandle GetExecutionContextHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FColor GetBackgroundColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetAliasName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FinishExecute(ERebelAILogicTree_TaskRunStatus Status) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanEnterAliasedBranch() const;
    
};

