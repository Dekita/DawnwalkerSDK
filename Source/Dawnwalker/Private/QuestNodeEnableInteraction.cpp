#include "QuestNodeEnableInteraction.h"

UQuestNodeEnableInteraction::UQuestNodeEnableInteraction() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bEnable = false;
}


