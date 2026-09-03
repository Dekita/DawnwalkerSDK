#include "DrinkBloodFocusAbility.h"

UDrinkBloodFocusAbility::UDrinkBloodFocusAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->bNeedsHoldToActivate = true;
    this->BloodReplenishPercentageEscapePerLevel.AddDefaulted(4);
    this->BossEscapeHealthPercentage = 0.85f;
    this->CurrentStage = EBloodDrinkingStage::None;
    this->bLostControl = false;
    this->bButtonPressed = false;
}

void UDrinkBloodFocusAbility::TickDrinking() {
}

void UDrinkBloodFocusAbility::StartDrinking() {
}

void UDrinkBloodFocusAbility::StartBloodDrinking(const AActor* InTargetActor, const FCreatureEntry& InCreatureEntry) {
}

bool UDrinkBloodFocusAbility::ShouldForceEscape() const {
    return false;
}

void UDrinkBloodFocusAbility::PrepareForDrinking() {
}

void UDrinkBloodFocusAbility::PlayWaitingForDrinking() {
}

void UDrinkBloodFocusAbility::PlayStruggleToEscape() {
}

void UDrinkBloodFocusAbility::PlayStruggleToBite_Uncontrolled() {
}

void UDrinkBloodFocusAbility::PlayStruggleToBite() {
}

void UDrinkBloodFocusAbility::PlayStruggle() {
}

void UDrinkBloodFocusAbility::PlayAttack() {
}

void UDrinkBloodFocusAbility::PlayAnimationLoop() {
}

void UDrinkBloodFocusAbility::OnTargetEndPlay(AActor* InActor, TEnumAsByte<EEndPlayReason::Type> Reason) {
}





void UDrinkBloodFocusAbility::OnFinishDrinkingCompleted() {
}




void UDrinkBloodFocusAbility::OnCombatStateChanged(const ECombatState NewState) {
}

float UDrinkBloodFocusAbility::GetMinHealthPercentageToEscape() const {
    return 0.0f;
}

UFocusAbilityLevelSequence* UDrinkBloodFocusAbility::GetLevelSubsequenceForPlaying(const EBloodDrinkingStage InStage) {
    return NULL;
}

UAnimMontage* UDrinkBloodFocusAbility::GetInstigatorCustomAnimMontage() const {
    return NULL;
}



UAnimSequence* UDrinkBloodFocusAbility::GetCreatureCustomAnim() const {
    return NULL;
}

float UDrinkBloodFocusAbility::GetBloodReplenishPercentageToEscape() const {
    return 0.0f;
}

void UDrinkBloodFocusAbility::FinishDrinkingByButtonRelease() {
}

void UDrinkBloodFocusAbility::FinishDrinking(bool bInstant, bool bPlayAnims) {
}

void UDrinkBloodFocusAbility::End() {
}


