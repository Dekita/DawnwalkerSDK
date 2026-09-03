#include "RebelAIActionFragment_BlueprintBase.h"

URebelAIActionFragment_BlueprintBase::URebelAIActionFragment_BlueprintBase() {
    this->SelectionWeight = 0.10f;
    this->bStopCollectingOtherAssets = false;
}

void URebelAIActionFragment_BlueprintBase::Release_Implementation(URebelAIStub* GetAIStub, URebelAIActionExecutionContext* ActionCtx) {
}

bool URebelAIActionFragment_BlueprintBase::Process_Implementation(const URebelAIStub* AIStub, URebelAIActionExecutionContext* ExecutionContext) const {
    return false;
}

FString URebelAIActionFragment_BlueprintBase::GetLabel_Implementation() const {
    return TEXT("");
}

void URebelAIActionFragment_BlueprintBase::Finish() const {
}



