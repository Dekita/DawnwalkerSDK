#include "FocusDetectorComponent.h"

UFocusDetectorComponent::UFocusDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereRadius = 32.00f;
    this->bEverMoves = false;
    this->bIsInFocus = false;
}

void UFocusDetectorComponent::SetSphereRadius(float InSphereRadius) {
}

void UFocusDetectorComponent::LeaveFocus() {
}

bool UFocusDetectorComponent::IsInFocus() const {
    return false;
}

void UFocusDetectorComponent::EnterFocus() {
}


