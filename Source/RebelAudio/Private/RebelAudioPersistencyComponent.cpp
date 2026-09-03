#include "RebelAudioPersistencyComponent.h"

URebelAudioPersistencyComponent::URebelAudioPersistencyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AudioTarget = NULL;
}

void URebelAudioPersistencyComponent::PostPendingPersistentAudioData(URWAudioComponent* RWAudioTarget) {
}


