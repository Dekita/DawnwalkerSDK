#include "RWAudioListener.h"
#include "RWAudioComponent.h"

ARWAudioListener::ARWAudioListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URWAudioComponent>(TEXT("RWListenerComponent"));
    this->ListenerComponent = (URWAudioComponent*)RootComponent;
}

void ARWAudioListener::SetListenerDampingTime(const float DampingTimeInS) {
}

void ARWAudioListener::SetCameraToPlayerPosition(const float NewPosition) {
}

FTransform ARWAudioListener::GetListenerTransform() {
    return FTransform{};
}

FVector ARWAudioListener::GetListenerLocation() {
    return FVector{};
}

FVector ARWAudioListener::GetListenerDampenedLocation() {
    return FVector{};
}


