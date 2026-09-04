#include "AudioCharacterBaseComponent.h"

UAudioCharacterBaseComponent::UAudioCharacterBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bProvideAltitudeAsGlobalRtpc = true;
    this->OwnerCasted = NULL;
    this->AIStub = NULL;
    this->DefaultSoundConfig = NULL;
}


