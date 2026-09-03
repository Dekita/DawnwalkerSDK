#include "DawnwalkerAIReactionCondition_IsInCombatCheck.h"

FDawnwalkerAIReactionCondition_IsInCombatCheck::FDawnwalkerAIReactionCondition_IsInCombatCheck() {
    this->bInvert = false;
    this->CheckTarget = ERebelAIReactionCondition_CheckTarget::Owner;
}

