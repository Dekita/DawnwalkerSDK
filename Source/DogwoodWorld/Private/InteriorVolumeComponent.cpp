#include "InteriorVolumeComponent.h"

UDEPRECATED_InteriorVolumeComponent::UDEPRECATED_InteriorVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0.00f;
    this->BlendRadius = 100.00f;
    this->BlendWeight = 1.00f;
    this->bEnabled = true;
    this->bUseOverrideSettings = false;
    this->InteriorConfig = NULL;
    this->ParentShape = NULL;
}

void UDEPRECATED_InteriorVolumeComponent::OnParentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UDEPRECATED_InteriorVolumeComponent::OnParentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UDEPRECATED_InteriorVolumeComponent::ApplyPostProcessSettings() {
}


