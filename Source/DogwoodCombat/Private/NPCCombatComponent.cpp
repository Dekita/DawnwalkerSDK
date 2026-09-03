#include "NPCCombatComponent.h"

UNPCCombatComponent::UNPCCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyConfig = NULL;
    this->AttackAction = NULL;
    this->CurrentAttitude = ECharacterAttitude::None;
    this->AttitudeBeforeCombat = ECharacterAttitude::None;
    this->NeutralBehaviorTree = NULL;
    this->OffenseBehaviorTree = NULL;
    this->PreferredActiveGuardDirection = EBlockingDirection::None;
    this->TargetPlayer = NULL;
    this->OffenseController = NULL;
    this->DefenseController = NULL;
}

void UNPCCombatComponent::SetAttitude(ECharacterAttitude InAttitude) {
}

void UNPCCombatComponent::SetAggressiveTowards(APawn* Other) {
}

void UNPCCombatComponent::SelectAttackPattern() {
}

void UNPCCombatComponent::RemoveSlowdownIfPlayerIsInActiveState(const ECombatState NewState) {
}

void UNPCCombatComponent::RemoveSlowdownIfPlayerIsBlockingCorrectly() {
}

void UNPCCombatComponent::RemoveSlowdown() {
}

void UNPCCombatComponent::OnRebelAIEvent(const FRebelAIEvent& RebelAIEvent) const {
}

void UNPCCombatComponent::OnPawnSensed(APawn* Pawn) {
}

void UNPCCombatComponent::OnNoiseHeard(APawn* Instigator, const FVector& Location, float Volume) {
}

FVector UNPCCombatComponent::GetActorLocationWithCameraOffset() const {
    return FVector{};
}

FGameplayTag UNPCCombatComponent::BP_HitPlayerOpponentFromNewAI(const FCombatNotifyData& Data, AWeaponBase* Weapon, UCombatComponentBase* TargetHit, FRebelAI_AttackHit_Payload AttackHitPayload) {
    return FGameplayTag{};
}


