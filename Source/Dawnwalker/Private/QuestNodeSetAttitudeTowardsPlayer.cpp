#include "QuestNodeSetAttitudeTowardsPlayer.h"

UQuestNodeSetAttitudeTowardsPlayer::UQuestNodeSetAttitudeTowardsPlayer() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->AttitudeToSet = ECharacterAttitude::None;
    this->bForceCombatWithPlayer = false;
    this->bSkipWeaponDrawAnimation = false;
}


