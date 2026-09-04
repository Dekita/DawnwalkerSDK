#include "AnimNotifyState_AudioBase.h"

UAnimNotifyState_AudioBase::UAnimNotifyState_AudioBase() {
    this->PostOnlyIfInRange = false;
    this->FadeOut = 0;
    this->AttenuationRadiusOffset = 0.00f;
}

bool UAnimNotifyState_AudioBase::IsInProximityToPlayerCharacterToPlay(AActor* Owner, float EventAttenuation) const {
    return false;
}

bool UAnimNotifyState_AudioBase::IsInAnimPreview(const UObject* WorldContext) {
    return false;
}


