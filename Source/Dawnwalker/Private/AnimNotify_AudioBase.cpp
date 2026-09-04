#include "AnimNotify_AudioBase.h"

UAnimNotify_AudioBase::UAnimNotify_AudioBase() {
    this->IsVocalized = false;
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

