#include "SmallObjectInvestigationComponent.h"

USmallObjectInvestigationComponent::USmallObjectInvestigationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceFromCamera = ESOIObjectDistance::Medium;
    this->bTeleportPlayer = false;
    this->SpawnedCameraActor = NULL;
}


