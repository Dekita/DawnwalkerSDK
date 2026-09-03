#include "QuestNodeEnableTimeSkip.h"

UQuestNodeEnableTimeSkip::UQuestNodeEnableTimeSkip() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bEnableTimeSkip = true;
}


