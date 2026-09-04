#include "RebelAILogicTree_ServiceProxy.h"

URebelAILogicTree_ServiceProxy::URebelAILogicTree_ServiceProxy() {
}

void URebelAILogicTree_ServiceProxy::BP_StopCoroutine(FName CoroutineName, const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle) {
}

FName URebelAILogicTree_ServiceProxy::BP_StartCoroutine(const FRebelAINodeHandle& NodeHandle, FName CoroutineName, const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle, const FRebelAINodeHandle CoroutineOwnerNodeHandle) const {
    return NAME_None;
}

bool URebelAILogicTree_ServiceProxy::BP_IsCoroutineFinished(FName CoroutineName, const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle) {
    return false;
}

void URebelAILogicTree_ServiceProxy::BP_GetNodeParams(const FRebelAINodeHandle& NodeHandle, const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle, FInstancedStruct& OutParams) {
}

FName URebelAILogicTree_ServiceProxy::BP_GetMainCoroutineName(const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle) {
    return NAME_None;
}

FRebelAINodeHandle URebelAILogicTree_ServiceProxy::BP_GetDefinitionNode(FName Name) const {
    return FRebelAINodeHandle{};
}

ERebelAILogicTree_CoroutineScope URebelAILogicTree_ServiceProxy::BP_GetCoroutineScope(const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle) const {
    return ERebelAILogicTree_CoroutineScope::Service;
}

FGameplayTagContainer URebelAILogicTree_ServiceProxy::BP_GetActionTagsFromNodeParams(const FRebelAINodeHandle& NodeHandle, const FRebelAILogicTree_ExecutionContextHandle& ExecutionContextHandle) {
    return FGameplayTagContainer{};
}

bool URebelAILogicTree_ServiceProxy::BP_ConditionalFindNodesWithTypeTag(const FRebelAINodeHandle& NodeHandle, const FGameplayTagContainer& TypeTags, TArray<FRebelAINodeHandle>& OutNodes) const {
    return false;
}

bool URebelAILogicTree_ServiceProxy::BP_ChangePhase(FName Name) {
    return false;
}

bool URebelAILogicTree_ServiceProxy::BP_ChangeBehavior(FName Name) {
    return false;
}


