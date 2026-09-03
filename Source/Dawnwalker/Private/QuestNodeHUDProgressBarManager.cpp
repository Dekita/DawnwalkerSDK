#include "QuestNodeHUDProgressBarManager.h"

UQuestNodeHUDProgressBarManager::UQuestNodeHUDProgressBarManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bEnable = true;
    this->bChangeText = false;
    this->bChangePercentage = false;
    this->Percentage = 100;
    this->bSubtractPercentage = false;
    this->PercentageToSubtract = 0;
}


