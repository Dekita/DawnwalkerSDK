#include "QuestNodeEnableDayProgression.h"

UQuestNodeEnableDayProgression::UQuestNodeEnableDayProgression() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bEnableDayProgression = true;
    this->bRestoreTimeWhenDayProgressionWasDisabled = false;
}


