#include "SprintAbility.h"

USprintAbility::USprintAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->SprintProfile = NULL;
    this->bApplySprintCostEffect = true;
    this->TagRemovedTask = NULL;
    this->StaminaTask = NULL;
    this->BlockTask = NULL;
    this->ProfileHandle = -1;
}

void USprintAbility::ShowPrompt(bool bShow) {
}

void USprintAbility::OnStaminaChanged(bool MatchesComparison, float NewValue) {
}

void USprintAbility::OnCrouch() {
}

URebelCharacterMovementProfile* USprintAbility::GetSprintProfile_Implementation() const {
    return NULL;
}


