#include "RebelAILogicNode_Filter_BlueprintBase.h"

URebelAILogicNode_Filter_BlueprintBase::URebelAILogicNode_Filter_BlueprintBase() {
    this->OwnerAIStub = NULL;
    this->LTServiceProxy = NULL;
}

bool URebelAILogicNode_Filter_BlueprintBase::MeetsCriteria_Implementation() const {
    return false;
}

bool URebelAILogicNode_Filter_BlueprintBase::IsOwnerValidAndInitialized() const {
    return false;
}

FRebelAINodeHandle URebelAILogicNode_Filter_BlueprintBase::GetNodeHandle() const {
    return FRebelAINodeHandle{};
}

FString URebelAILogicNode_Filter_BlueprintBase::GetLabel_Implementation() const {
    return TEXT("");
}

FName URebelAILogicNode_Filter_BlueprintBase::GetIconName_Implementation() const {
    return NAME_None;
}

FRebelAILogicTree_ExecutionContextHandle URebelAILogicNode_Filter_BlueprintBase::GetExecutionContextHandle() const {
    return FRebelAILogicTree_ExecutionContextHandle{};
}


