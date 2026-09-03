#include "QuestNodePutPlayerInCombatStance.h"

UQuestNodePutPlayerInCombatStance::UQuestNodePutPlayerInCombatStance() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bUnarmedCombat = false;
}


