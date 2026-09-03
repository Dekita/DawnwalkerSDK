#include "RWAmbientSound.h"
#include "RWAudioComponent.h"

ARWAmbientSound::ARWAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URWAudioComponent>(TEXT("RWAmbientSound"));
    this->RWAudioComponent = (URWAudioComponent*)RootComponent;
    this->AutoPost = false;
}

void ARWAmbientSound::StopAmbientSound() {
}

void ARWAmbientSound::StartAmbientSound() {
}


