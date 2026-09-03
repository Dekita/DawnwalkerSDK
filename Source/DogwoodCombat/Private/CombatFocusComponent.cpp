#include "CombatFocusComponent.h"
#include "Templates/SubclassOf.h"

UCombatFocusComponent::UCombatFocusComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlowmoAmount = 1.00f;
    this->ConsumeActionSlotEffect = NULL;
    this->RefundActionSlotEffect = NULL;
}

bool UCombatFocusComponent::TryPlanAbility(UFocusAbilityBase* Ability) {
    return false;
}

void UCombatFocusComponent::ToggleFocusAbilitiesMode() {
}

void UCombatFocusComponent::SwitchTargetedFocusActor(AActor* Actor) {
}

void UCombatFocusComponent::SwitchOpenWorldTarget(ETargetChangeDirection TargetChangeDirection) {
}

void UCombatFocusComponent::SetTargetInFront() {
}

void UCombatFocusComponent::SetSlotsChargedOverride(const float InSlots) {
}

void UCombatFocusComponent::ResetSlotsChargedOverride() {
}

void UCombatFocusComponent::ResetCooldowns() {
}

void UCombatFocusComponent::ReduceCooldownsByValue(const float ReductionValueInSeconds) {
}

void UCombatFocusComponent::OnTargetingStarted() {
}

void UCombatFocusComponent::OnFocusModeExited() {
}

void UCombatFocusComponent::OnFocusModeEntered() {
}

void UCombatFocusComponent::OnCombatLockTargetChanged(UCombatComponentBase* InTarget) {
}

void UCombatFocusComponent::OnCombatFocusInterrupted() {
}

bool UCombatFocusComponent::IsInstantActionPlanned() const {
    return false;
}

bool UCombatFocusComponent::IsExecuting() const {
    return false;
}

bool UCombatFocusComponent::IsBlockedByAbility() {
    return false;
}

bool UCombatFocusComponent::IsAbilityAlreadyPlanned(UFocusAbilityBase* Ability) const {
    return false;
}

AActor* UCombatFocusComponent::GetTargetedActor() {
    return NULL;
}

TArray<FPlannedAction> UCombatFocusComponent::GetPlannedActions() {
    return TArray<FPlannedAction>();
}

float UCombatFocusComponent::GetOverallPlannedHealthOrBloodCost(UFocusAbilityBase* Ability) {
    return 0.0f;
}

int32 UCombatFocusComponent::GetOverallPlannedFocusChargeCost(UFocusAbilityBase* Ability) {
    return 0;
}

void UCombatFocusComponent::GetCurrentLoadout(TArray<UFocusAbilityBase*>& OutCombatAbilities, TArray<UFocusAbilityBase*>& OutFocusAbilities) {
}

EFocusAbilitiesMode UCombatFocusComponent::GetCurrentFocusAbilitiesMode() {
    return EFocusAbilitiesMode::FocusCombatMode;
}

void UCombatFocusComponent::ExecutePlan() {
}

void UCombatFocusComponent::ExecuteInstantAbility(UFocusAbilityBase* Ability) {
}

void UCombatFocusComponent::ExecuteFinisherAbility(TSubclassOf<UFinisherAbilityBase> FinisherAbility, AActor* TargetActor) {
}

bool UCombatFocusComponent::CanPlanNextItemCostAbility(const FItemHandle& Item, int32 QuantityToConsume) {
    return false;
}

bool UCombatFocusComponent::CanPlanNextHealthCostAbility(float HealthOrBloodCost) {
    return false;
}

bool UCombatFocusComponent::CanPlanNextChargeCostAbility(float FocusChargeCost) {
    return false;
}

bool UCombatFocusComponent::CancelAbility() {
    return false;
}


