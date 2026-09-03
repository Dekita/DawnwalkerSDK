#include "CombatTargetIndicatorBase.h"

UCombatTargetIndicatorBase::UCombatTargetIndicatorBase() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsAtMinimumScale = false;
}

void UCombatTargetIndicatorBase::UpdateIconTypeToMatchObservedStubState() {
}

void UCombatTargetIndicatorBase::ToggleShowOnlyMiddleIndicator_Implementation() {
}

void UCombatTargetIndicatorBase::OnWeakspotExploited_Implementation() {
}


void UCombatTargetIndicatorBase::OnMinimumScaleChanged_Implementation() {
}

void UCombatTargetIndicatorBase::NotifyIndicatorCleared_Implementation() {
}

bool UCombatTargetIndicatorBase::GetShowsOnlyMiddleIndicator_Implementation() {
    return false;
}

void UCombatTargetIndicatorBase::EnableHardLock_Implementation(bool bEnable) {
}


