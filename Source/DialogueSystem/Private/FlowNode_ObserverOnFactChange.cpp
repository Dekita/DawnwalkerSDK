#include "FlowNode_ObserverOnFactChange.h"

UFlowNode_ObserverOnFactChange::UFlowNode_ObserverOnFactChange() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(2);
    this->bUnregisterOnChange = true;
}

void UFlowNode_ObserverOnFactChange::OnFactChanged(const FGameplayTag& FactName) {
}


