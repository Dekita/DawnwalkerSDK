#include "AudioCharacterBaseComponent.h"

UAudioCharacterBaseComponent::UAudioCharacterBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bProvideAltitudeAsGlobalRtpc = true;
    this->CharacterSpeedRTPCPtr = NULL;
    this->CharacterAltitudeRTPCPtr = NULL;
    this->NPCVoiceSwitch = NULL;
    this->OwnerCasted = NULL;
    this->AIStub = NULL;
    this->DefaultSoundConfig = NULL;
}


