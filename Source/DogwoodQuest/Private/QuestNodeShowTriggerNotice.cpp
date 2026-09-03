#include "QuestNodeShowTriggerNotice.h"

UQuestNodeShowTriggerNotice::UQuestNodeShowTriggerNotice() {
    this->Inputs.AddDefaulted(2);
    this->Outputs.AddDefaulted(2);
    this->TimeProgressionType = EQuestTimeProgressionType::Minimal;
}


