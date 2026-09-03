#include "AudioPlayerCombatComponent.h"

UAudioPlayerCombatComponent::UAudioPlayerCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAudioPlayerCombatComponent::OnResetCombatNotifyStates() {
}

void UAudioPlayerCombatComponent::OnParryImpact(FGameplayTag AttackerWeaponTag, FGameplayTag DefenderWeaponTag, AActor* AttackingCharacter, AActor* DefendingCharacter) {
}

void UAudioPlayerCombatComponent::OnOmniBlockImpact(FGameplayTag AttackerWeaponTag, FGameplayTag DefenderWeaponTag, AActor* AttackingCharacter, AActor* DefendingCharacter) {
}

void UAudioPlayerCombatComponent::OnIsPlayerVampireChanged(bool bIsVampire) {
}

void UAudioPlayerCombatComponent::OnHitImpact(EAttackStrength AttackStrength, FGameplayTag WeaponSoundTag, EClothingSoundType ClothingSoundType, AActor* AttackingCharacter, AActor* DefendingCharacter, bool bIsStunned) {
}

void UAudioPlayerCombatComponent::OnBlockImpact(FGameplayTag AttackerWeaponTag, FGameplayTag DefenderWeaponTag, AActor* AttackingCharacter, AActor* DefendingCharacter) {
}

void UAudioPlayerCombatComponent::OnAttackActiveFrameEntered() {
}


