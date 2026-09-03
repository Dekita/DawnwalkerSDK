#include "FlowNode_ComponentObserver.h"

UFlowNode_ComponentObserver::UFlowNode_ComponentObserver() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(3);
    this->IdentityMatchType = EFlowTagContainerMatchType::HasAnyExact;
    this->SuccessLimit = 1;
    this->SuccessCount = 0;
}

void UFlowNode_ComponentObserver::OnEventReceived() {
}

void UFlowNode_ComponentObserver::OnComponentUnregistered(UFlowComponent* Component) {
}

void UFlowNode_ComponentObserver::OnComponentTagRemoved(UFlowComponent* Component, const FGameplayTagContainer& RemovedTags) {
}

void UFlowNode_ComponentObserver::OnComponentTagAdded(UFlowComponent* Component, const FGameplayTagContainer& AddedTags) {
}

void UFlowNode_ComponentObserver::OnComponentRegistered(UFlowComponent* Component) {
}


