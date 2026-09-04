#include "FlowNode_FactObserver.h"

UFlowNode_FactObserver::UFlowNode_FactObserver() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UFlowNode_FactObserver::OnFactEntryChanged(const FGameplayTag& FactName) {
}


