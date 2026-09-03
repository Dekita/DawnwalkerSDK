#include "InspectableBase.h"

AInspectableBase::AInspectableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AInspectableBase::OnInspectedSpotNotification(const FString& SpotName) const {
}

void AInspectableBase::OnCompletedInspectionNotification() const {
}

void AInspectableBase::OnCancelledInspectionNotification() const {
}


