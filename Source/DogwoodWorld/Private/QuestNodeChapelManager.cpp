#include "QuestNodeChapelManager.h"

UQuestNodeChapelManager::UQuestNodeChapelManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bModifyFastTravelEnabled = false;
    this->bFastTravelEnabled = false;
}


