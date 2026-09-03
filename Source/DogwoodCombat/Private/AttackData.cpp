#include "AttackData.h"

FAttackData::FAttackData() {
    this->Action = NULL;
    this->PlayedAttackMontageInstanceID = 0;
    this->PlayedAttackMontage = NULL;
    this->Direction = EWeaponSwingDirection::None;
    this->Target = NULL;
    this->Instigator = NULL;
    this->Weapon = NULL;
    this->ChainCount = 0;
    this->TimePerformed = 0.00f;
    this->bIsUnblockable = false;
    this->CustomParryWindowMultiplierPerAttack = 0.00f;
    this->AttackType = EAttackType::First;
}

