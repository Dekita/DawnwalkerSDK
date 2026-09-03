#include "WoundContainerComponent.h"

UWoundContainerComponent::UWoundContainerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Config = NULL;
}

void UWoundContainerComponent::MitigateAllWounds() {
}

void UWoundContainerComponent::InflictWound(UWoundType* WoundType) {
}

void UWoundContainerComponent::HealAllWounds() {
}

TArray<FWound> UWoundContainerComponent::GetWounds() {
    return TArray<FWound>();
}

bool UWoundContainerComponent::CanBeWoundedBy(UWoundType* WoundType) const {
    return false;
}


