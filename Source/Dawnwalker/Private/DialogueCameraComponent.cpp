#include "DialogueCameraComponent.h"

UDialogueCameraComponent::UDialogueCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConstrainAspectRatio = false;
    this->CameraDistanceZoomOffset = 0.00f;
    this->ForceTrackOwnerUnit = false;
}


