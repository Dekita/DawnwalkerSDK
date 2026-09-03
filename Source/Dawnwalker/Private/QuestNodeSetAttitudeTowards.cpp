#include "QuestNodeSetAttitudeTowards.h"

UQuestNodeSetAttitudeTowards::UQuestNodeSetAttitudeTowards() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->AttitudeToSet = ERebelAIAttitude::NotSet;
    this->bForceCombat = false;
    this->bSkipWeaponDrawAnimationForSideANPCs = false;
    this->bSkipWeaponDrawAnimationForSideBNPCs = false;
}


