#include "CombatMode.h"

UCombatMode::UCombatMode() {
    this->ImpactCameraShakeAsset = NULL;
    this->bShouldAddWhenFatigued = false;
    this->CameraType = EWeaponCameraType::Near;
    this->DodgeStaminaCost = 20.00f;
    this->DodgeBloodCost = 0.00f;
    this->UltraDodgeStaminaReward = 25.00f;
    this->FatiguedStateAttackPlayRate = 0.75f;
    this->FatiguedStateReactionPlayRate = 1.00f;
    this->FatiguedStateParryBlockReactionPlayRate = 1.00f;
    this->FatiguedStateDodgePlayRate = 1.00f;
    this->AllAttackPlayRateCurve = NULL;
    this->BaseAttackPlayRateCurve = NULL;
    this->FirstAttackPlayRateCurve = NULL;
    this->RiposteAttackPlayRateCurve = NULL;
    this->FollowUpsAttackPlayRateCurve = NULL;
    this->PirouetteAttackPlayRateCurve = NULL;
    this->DistanceCapsuleRadiusOffset = 0.00f;
}


