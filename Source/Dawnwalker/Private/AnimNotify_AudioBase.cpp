#include "AnimNotify_AudioBase.h"

UAnimNotify_AudioBase::UAnimNotify_AudioBase() {
    this->IsVocalized = false;
}

int32 UAnimNotify_AudioBase::PostVocalizedSoundEffect(URWAudioComponent* Target, UAkAudioEvent* Event) const {
    return 0;
}

bool UAnimNotify_AudioBase::IsVocalizedNotifyAllowed(const USkeletalMeshComponent* MeshComp) const {
    return false;
}

bool UAnimNotify_AudioBase::IsOwnerInWater(const UMeshComponent* MeshComp) const {
    return false;
}

bool UAnimNotify_AudioBase::IsInProximityToPlayerCharacterToPlay(AActor* Owner, float EventAttenuation) const {
    return false;
}

bool UAnimNotify_AudioBase::IsInAnimationPreview(const UMeshComponent* MeshComp) const {
    return false;
}


