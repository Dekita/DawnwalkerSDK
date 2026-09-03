#include "QuestNodeBranch.h"

UQuestNodeBranch::UQuestNodeBranch() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->Condition = NULL;
    this->DayPhaseCondition = EDayPhaseCondition::BothDayAndNight;
}


