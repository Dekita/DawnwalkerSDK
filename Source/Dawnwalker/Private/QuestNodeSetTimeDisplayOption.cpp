#include "QuestNodeSetTimeDisplayOption.h"

UQuestNodeSetTimeDisplayOption::UQuestNodeSetTimeDisplayOption() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->NewTimeDisplayOption = ETimeDisplayOption::Full;
}


