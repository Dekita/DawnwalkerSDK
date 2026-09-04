#include "FlowOwnerFunctionParams.h"

UFlowOwnerFunctionParams::UFlowOwnerFunctionParams() {
    this->SourceNode = NULL;
}

bool UFlowOwnerFunctionParams::ShouldFinishForOutputName_Implementation(const FName& OutputName) const {
    return false;
}



TArray<FName> UFlowOwnerFunctionParams::BP_GetOutputNames() const {
    return TArray<FName>();
}

TArray<FName> UFlowOwnerFunctionParams::BP_GetInputNames() const {
    return TArray<FName>();
}


