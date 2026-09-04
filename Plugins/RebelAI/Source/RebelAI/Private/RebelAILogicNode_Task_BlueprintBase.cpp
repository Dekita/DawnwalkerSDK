#include "RebelAILogicNode_Task_BlueprintBase.h"

URebelAILogicNode_Task_BlueprintBase::URebelAILogicNode_Task_BlueprintBase() {
    this->OwnerAIStub = NULL;
    this->LTServiceProxy = NULL;
}

void URebelAILogicNode_Task_BlueprintBase::SubscribeToEvents(const FGameplayTagContainer& EventTags) {
}





FGameplayTag URebelAILogicNode_Task_BlueprintBase::GetTypeTag_Implementation() const {
    return FGameplayTag{};
}

FInstancedStruct URebelAILogicNode_Task_BlueprintBase::GetParams_Implementation() const {
    return FInstancedStruct{};
}

FRebelAINodeHandle URebelAILogicNode_Task_BlueprintBase::GetNodeHandle() const {
    return FRebelAINodeHandle{};
}

FString URebelAILogicNode_Task_BlueprintBase::GetLabel_Implementation() const {
    return TEXT("");
}

FName URebelAILogicNode_Task_BlueprintBase::GetIconName_Implementation() const {
    return NAME_None;
}

FRebelAILogicTree_ExecutionContextHandle URebelAILogicNode_Task_BlueprintBase::GetExecutionContextHandle() const {
    return FRebelAILogicTree_ExecutionContextHandle{};
}

FColor URebelAILogicNode_Task_BlueprintBase::GetBackgroundColor_Implementation() const {
    return FColor{};
}

FName URebelAILogicNode_Task_BlueprintBase::GetAliasName_Implementation() const {
    return NAME_None;
}

void URebelAILogicNode_Task_BlueprintBase::FinishExecute(ERebelAILogicTree_TaskRunStatus Status) const {
}

bool URebelAILogicNode_Task_BlueprintBase::CanEnterAliasedBranch_Implementation() const {
    return false;
}


