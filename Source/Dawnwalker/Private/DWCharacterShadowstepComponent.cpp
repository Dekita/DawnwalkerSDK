#include "DWCharacterShadowstepComponent.h"

UDWCharacterShadowstepComponent::UDWCharacterShadowstepComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultShadowstepFX = NULL;
    this->CombatShadowstepStartBurstFX = NULL;
    this->CombatShadowstepEndBurstFX = NULL;
    this->DefaultShadowstepMontage = NULL;
    this->EndMontages = NULL;
    this->CombatAction = NULL;
    this->OutOfCombatAction = NULL;
    this->ShadowstepVelocityMps = 2.50f;
    this->GroundSnappingDistance = 150.00f;
    this->RoofCornerDistance = 100.00f;
    this->LedgeMaxStickOutDistance = 120.00f;
    this->SnappingBehindDistance = 75.00f;
    this->AimSearchChannel = ECC_GameTraceChannel14;
    this->AimCollisionChannel = ECC_Visibility;
    this->AttackRadius = 80.00f;
    this->RefundEffectClass = NULL;
    this->MaxRefunds = 3;
    this->ShadowstepAimOffsetMultiplier = 0.40f;
    this->CombatSnapBehindQuery = NULL;
    this->MovementCurve = NULL;
    this->AttackAction = NULL;
    this->CounterAction = NULL;
    this->StartSoundEvent = NULL;
    this->StopSoundEvent = NULL;
    this->EffectAfterTeleportTransition = NULL;
    this->TransitionMontage = NULL;
}

bool UDWCharacterShadowstepComponent::StartShadowstep(UNiagaraComponent* ShadowstepFX, UAnimMontage* ShadowstepMontage, FGameplayTagContainer AbilitiesToCancel) {
    return false;
}

void UDWCharacterShadowstepComponent::SetAimingEnabled(bool bInAimingEnabled) {
}

void UDWCharacterShadowstepComponent::ProgressShadowstep(float Time) {
}

void UDWCharacterShadowstepComponent::OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UDWCharacterShadowstepComponent::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

bool UDWCharacterShadowstepComponent::HasValidShadowstepTarget() const {
    return false;
}

bool UDWCharacterShadowstepComponent::HasBeenTriggeredRecently(float InSeconds) const {
    return false;
}

float UDWCharacterShadowstepComponent::GetShadowstepVerticalRangeUp() const {
    return 0.0f;
}

float UDWCharacterShadowstepComponent::GetShadowstepVerticalRangeDown() const {
    return 0.0f;
}

EDawnwalkerShadowstepTargetState UDWCharacterShadowstepComponent::GetShadowstepTargetState() const {
    return EDawnwalkerShadowstepTargetState::Undefined;
}

EDawnwalkerShadowstepState UDWCharacterShadowstepComponent::GetShadowstepState() const {
    return EDawnwalkerShadowstepState::Idle;
}

float UDWCharacterShadowstepComponent::GetShadowstepProgress() const {
    return 0.0f;
}

float UDWCharacterShadowstepComponent::GetShadowstepHorizontalRange() const {
    return 0.0f;
}

EDawnwalkerShadowstepAimingState UDWCharacterShadowstepComponent::GetAimingState() const {
    return EDawnwalkerShadowstepAimingState::Invalid;
}

bool UDWCharacterShadowstepComponent::GetAimingEnabled() const {
    return false;
}

void UDWCharacterShadowstepComponent::EndShadowstep(bool bWasInterrupted, bool TeleportToTargetLocation) {
}

void UDWCharacterShadowstepComponent::ConditionalUpdateWithPossibleTarget() {
}

void UDWCharacterShadowstepComponent::ConditionalTryRetrigger() {
}

void UDWCharacterShadowstepComponent::AttemptShadowstep() {
}


