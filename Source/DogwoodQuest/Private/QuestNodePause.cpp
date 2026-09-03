#include "QuestNodePause.h"

UQuestNodePause::UQuestNodePause() {
    this->Inputs.AddDefaulted(2);
    this->Outputs.AddDefaulted(2);
    this->Condition = NULL;
    this->DayPhaseCondition = EDayPhaseCondition::BothDayAndNight;
}


