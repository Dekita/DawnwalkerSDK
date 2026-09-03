#include "FocusAttack.h"

UFocusAttack::UFocusAttack() {
    this->MaxAttackDistance = 0.00f;
    this->SuccessChance = 0.00f;
    this->DashForwardMontage = NULL;
    this->DashCurve = NULL;
    this->DashSpeed = 0.00f;
    this->TargetActor = NULL;
}

void UFocusAttack::Perform() {
}

void UFocusAttack::OnTargetReceived(FGameplayEventData Payload) {
}




