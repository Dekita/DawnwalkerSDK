#include "CombatNotifyData.h"

FCombatNotifyData::FCombatNotifyData() {
    this->NotifyType = ECombatNotifyType::None;
    this->ActionDirection = EWeaponSwingDirection::None;
    this->WeaponSlot = EWeaponSlot::None;
    this->WeaponID = 0;
    this->CombatAction = NULL;
    this->bIsHarmless = false;
    this->bIsFromActiveAbility = false;
    this->BonusColliderLength = 0.00f;
    this->ForcedAnimationMontage = NULL;
    this->ActivationChance = 0.00f;
    this->PlayerInputWaitDuration = 0.00f;
    this->AdditionalAttackRangeOffset = 0.00f;
    this->HandForClaws = EClawsSlot::LeftHand;
}

