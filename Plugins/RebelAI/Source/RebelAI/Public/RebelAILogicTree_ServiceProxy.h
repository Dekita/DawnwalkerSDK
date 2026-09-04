#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ERebelAILogicTree_CoroutineScope.h"
#include "RebelAILogicTree_ExecutionContextHandle.h"
#include "RebelAINodeHandle.h"
#include "RebelAILogicTree_ServiceProxy.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URebelAILogicTree_ServiceProxy : public UObject {
    GENERATED_BODY()
public:
    URebelAILogicTree_ServiceProxy();

    UFUNCTION(BlueprintCallable)
    void BP_StopCoroutine(FName CoroutineName, const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BP_StartCoroutine(const FRebelAINodeHandle& NodeHandle, FName CoroutineName, const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle, const FRebelAINodeHandle CoroutineOwnerNodeHandle) const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsCoroutineFinished(FName CoroutineName, const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle);
    
    UFUNCTION(BlueprintCallable)
    void BP_GetNodeParams(const FRebelAINodeHandle& NodeHandle, const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle, FInstancedStruct& OutParams);
    
    UFUNCTION(BlueprintCallable)
    FName BP_GetMainCoroutineName(const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRebelAINodeHandle BP_GetDefinitionNode(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERebelAILogicTree_CoroutineScope BP_GetCoroutineScope(const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer BP_GetActionTagsFromNodeParams(const FRebelAINodeHandle& NodeHandle, const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_ConditionalFindNodesWithTypeTag(const FRebelAINodeHandle& NodeHandle, const FGameplayTagContainer& TypeTags, TArray<FRebelAINodeHandle>& OutNodes) const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_ChangePhase(FName Name);
    
    UFUNCTION(BlueprintCallable)
    bool BP_ChangeBehavior(FName Name);
    
};

