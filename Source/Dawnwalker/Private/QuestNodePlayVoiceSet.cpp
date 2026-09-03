#include "QuestNodePlayVoiceSet.h"

UQuestNodePlayVoiceSet::UQuestNodePlayVoiceSet() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->bCanPlayDuringCombat = false;
}


