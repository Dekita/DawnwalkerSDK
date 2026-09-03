#include "QuestNodeSetCombatBlockedForPlayer.h"

UQuestNodeSetCombatBlockedForPlayer::UQuestNodeSetCombatBlockedForPlayer() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bBlockCombat = true;
}


