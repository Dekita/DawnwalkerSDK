#include "QuestNodeEnableQuestStartMappin.h"

UQuestNodeEnableQuestStartMappin::UQuestNodeEnableQuestStartMappin() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->Quest = NULL;
    this->bEnable = true;
}


