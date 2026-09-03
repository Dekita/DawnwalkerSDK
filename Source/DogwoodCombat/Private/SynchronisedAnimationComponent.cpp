#include "SynchronisedAnimationComponent.h"

USynchronisedAnimationComponent::USynchronisedAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraTransitionCurve = NULL;
}

void USynchronisedAnimationComponent::ProgressCameraTransition(float Time) {
}

float USynchronisedAnimationComponent::Play(ACharacter* InTargetCharacter, UAnimMontage* InstigatorAnimation, UAnimMontage* TargetAnimation, bool AnimateCamera, ESynchronisedAnimationRotationMode RotationMode, bool SnapTargetOnly, bool Lerp, bool Sweep) {
    return 0.0f;
}

void USynchronisedAnimationComponent::OnStateChanged(const ECombatState NewState) {
}


