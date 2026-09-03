#include "QuestNodeEnableMappin.h"

UQuestNodeEnableMappin::UQuestNodeEnableMappin() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bEnable = true;
    this->bDisableOtherMappinsFromObjective = false;
}


